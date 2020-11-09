#include "logicfunctionparser.h"

LogicFunctionParser::LogicFunctionParser()
{

}

void LogicFunctionParser::setSearchPath(QString val)
{
    file_path = val;
}

void LogicFunctionParser::setParent(QTreeWidgetItem *par){
    parent = par;
}

bool LogicFunctionParser::checkFunctionModifier(QString cur_block, LogicFunction *function)
{
    // controllo
    if(cur_block != ""){
        // controllo se indica uno scope
        if(cur_block == "private"){
            function->setScope(LogicClassScope::Private);
            return true;
        }
        else if(cur_block == "public"){
            function->setScope(LogicClassScope::Public);
            return true;
        }
        else if(cur_block == "protected"){
            function->setScope(LogicClassScope::Protected);
            return true;
        }
        else if(cur_block == "static"){
            function->setStatic(true);
            return true;
        }
        else if(cur_block == "volatile"){
            function->setStatic(false);
            return true;
        }
        else if(cur_block == "inline"){
            return true;
        }
        else if(cur_block == "explicit"){
            return true;

        }
        else if(cur_block == "extern"){
            return true;
        }
        else if(cur_block == "restrict"){
            return true;
        }
        else if(cur_block == "const"){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

LogicFunction* LogicFunctionParser::parseLine(QString li){
    // controllo che la riga non sia vuota
    qInfo() << "try parse function in line: " << li << endl;
    if(li != ""){
        // controllo se è un commento
        if(!li.startsWith("//")){
            if(!li.startsWith("/*")){
                if(!li.startsWith("/*")){
                    // definisco un flag che indica l'apertura di un commento multilinea
                    if(!(li.contains(" new " ) || li.contains("=new "))){
                        if(!li.contains('=')){
                            // controllo se si tratta di una direttiva al preprocessore
                            if(!li.startsWith("#")){
                                // controllo che siano presenti almeno due parole staccate
                                if(li.split(' ').count() >= 2){
                                    // controllo se sono presenti parentesi aperte e chiuse
                                    if(li.contains('(') && li.contains(')')){
                                        // potrebbe essere una funzione
                                        // controllo che non contenga la parola classe
                                        if(!li.contains("class ")){
                                            qInfo() << "Found function definition. " << li << endl;

                                            // puntatore alla funzione trovata
                                            LogicFunction *found = new LogicFunction();

                                            // lista con le parti della riga prima e dopo l'apertura della parentesi tonda
                                            QStringList line_parts_brack = li.split('(');
                                            // controllo esista una divisione
                                            if(line_parts_brack.count() > 0){
                                                // calcolo i blocchi presenti prima della (
                                                QStringList blocks_before_opening = line_parts_brack[0].split(' ');
                                                // debug info
                                                QString cur_block;
                                                // numero di modificatori trovati nella definizione
                                                int modifyers = 0;
                                                // rimuovo i ""
                                                blocks_before_opening.removeAll("");
                                                line_parts_brack.removeAll("");
                                                // numero di blocchi trovati (spazi esclusi)
                                                int blocks_count = blocks_before_opening.count();

                                                // controllo se si tratta di un costruttore
                                                if(blocks_before_opening.count() == 1){
                                                    // imposto il nome della funzione
                                                    blocks_before_opening[0].remove('\t');
                                                    blocks_before_opening[0].remove(' ');
                                                    found->setName(blocks_before_opening[0]);
                                                    // segnalo che si tratta di un costruttore
                                                    found->setIsConstructor(true);
                                                }
                                                else{
                                                    qInfo() << "Start line scan for " << blocks_count << " blocks." << endl;
                                                    // scorro i blocchi prima della (
                                                    for(int x = 0; x < blocks_count; x++){
                                                        // leggo il blocco corrente
                                                        cur_block = blocks_before_opening[x];
                                                        // rimuovo gli spazi in eccesso
                                                        cur_block.remove('\t');
                                                        // controllo se ci sono modificatori
                                                        qInfo() << "Check function block: " << cur_block << " cicle n: " << x << endl << "Blocks before opening: " << blocks_before_opening << endl;
                                                        qInfo() << "Check modifier" << endl;
                                                        if(checkFunctionModifier(cur_block, found)){
                                                            modifyers ++;
                                                            qInfo() << "Found modifier. Number: " << modifyers << endl;
                                                        }
                                                        else{
                                                            qInfo() << "Not found" << endl << " check difference x, modifiers: " << x - modifyers << endl;
                                                            // salvo le parti della funzione
                                                            if(x - modifyers == 0){
                                                                // ho trovato la prima parola dopo gli eventuali modificatori
                                                                // la salvo nel tipo restituito
                                                                // controllo se si tratta di un modificatore di tipo
                                                                qInfo() << "Check for function return type: " << cur_block << endl;
                                                                if(cur_block == "unsigned" || cur_block == "signed"){
                                                                    // valore dell' indice successivo
                                                                    int next_index = x + 1;
                                                                    // controllo se esiste un elemento dopo questo
                                                                    qInfo() << "First step: function return modifier found. " << endl;
                                                                    if(next_index < (blocks_count - 1) && blocks_before_opening[next_index] != ""){

                                                                        // salvo il tipo restituito prendendo anche il tipo successivo
                                                                        qInfo() << "Function return type set. " << cur_block + " " + blocks_before_opening[next_index] << endl;
                                                                        found->setReturnType(cur_block + " " + blocks_before_opening[next_index]);
                                                                    }
                                                                    else {
                                                                        QMessageBox *msg = new QMessageBox();
                                                                        msg->setText("Errore nella ricerca di simboli nella riga " + li + " non è stato trovato il tipo di dato successivo allo specificatore " + cur_block);
                                                                        msg->exec();
                                                                    }
                                                                }
                                                                else{
                                                                    qInfo() << "No modifier found. Set value: " << cur_block << endl;
                                                                    // imposto il tipo di dato restituito

                                                                    found->setReturnType(cur_block);
                                                                }
                                                            }
                                                            else{
                                                                // salvo il nome di funzione
                                                                cur_block.remove('(');
                                                                cur_block.remove(' ');
                                                                cur_block.remove('\t');
                                                                qInfo() << "Function name found: " << cur_block << endl;
                                                                found->setName(cur_block);
                                                            }
                                                        }
                                                    }
                                                }
                                                // salvo gli argomenti della funzione
                                                QString args = line_parts_brack[1];
                                                args.remove(')');
                                                args.remove(';');
                                                found->setArguments(args);
                                                return found;
                                            }
                                        }
                                        else{
                                            return nullptr;
                                        }
                                    }
                                    else{
                                        return nullptr;
                                    }
                                }
                                else{
                                    return nullptr;
                                }
                            }
                            else{
                                return nullptr;
                            }
                        }
                        else{
                            return nullptr;
                        }
                    }
                    else{
                        return nullptr;
                    }
                }
                else{
                    return nullptr;
                }
            }
            else{
                return nullptr;
            }
        }
        else{
            return nullptr;
        }
    }
    else{
        return nullptr;
    }
    return nullptr;
}

bool LogicFunctionParser::search(LogicViewPalette palette) {
    // creo il file
    QFile file(file_path);
    bool comment = false;
    // apro
    if(file.open(QIODevice::ReadOnly)){
        QTextStream str(&file);
        QString cur_line;
        while(!str.atEnd()){
            // leggo e effettuo il parse di ogni linea
            qInfo() << "New line control: comment " << comment << endl;
            // leggo una riga
            cur_line = str.readLine();
            // controllo se non si tratta di un inizio di commento
            if(!cur_line.contains("/*")){
                if(!cur_line.contains("*/")){
                    if(!comment){
                        // non siamo in un commento multilinea
                        LogicFunction *fun = parseLine(cur_line);
                        // controllo se si tratta di un nullptr
                        if(fun != nullptr){
                            // posso aggiungere al parent
                            QTreeWidgetItem *i = new QTreeWidgetItem(parent);
                            // leggo il nome
                            i->setText(0, fun->getName());
                            // leggo gli argomenti
                            i->setText(1, fun->getArguments());
                            // imposto l'icona
                            i->setIcon(0, QIcon(":/icons/logics/Icons/function_icon.png"));
                            // controllo se si tratta di un costruttore
                            if(!fun->isConstructor()){
                                // leggo il tipo restituito
                                i->setText(2, fun->getReturnType());
                                // imposto il colore di sfondo
                                i->setBackground(0, palette.getFunctionBackground());
                                i->setBackground(1, palette.getFunctionBackground());
                                i->setBackground(2, palette.getFunctionBackground());
                                // imposto il colore del testo
                                i->setForeground(0, palette.getFunctionForeground());
                                i->setForeground(1, palette.getFunctionForeground());
                                i->setForeground(2, palette.getFunctionForeground());
                            }
                            else{
                                // si tratta di un costruttore
                                // imposto il colore di sfondo
                                i->setBackground(0, palette.getConstructorBackground());
                                i->setBackground(1, palette.getConstructorBackground());
                                i->setBackground(2, palette.getConstructorBackground());
                                // imposto il colore del testo
                                i->setForeground(0, palette.getConstructorForeground());
                                i->setForeground(1, palette.getConstructorForeground());
                                i->setForeground(2, palette.getConstructorForeground());
                            }
                            // aggiungo l'elemento alla lista
                            parent->addChild(i);
                        }
                    }
                }
                else{
                    comment = false;
                }
            }
            else{
                comment = true;
            }

        }
    }
    return true;
}

