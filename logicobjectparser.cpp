#include "logicobjectparser.h"

LogicObjectParser::LogicObjectParser()
{

}

void LogicObjectParser::setSearchPath(QString p){
    path = p;
}

void LogicObjectParser::setSurface(QTreeWidget *parent){
    surface = parent;
}

void LogicObjectParser::setConsole(QPlainTextEdit *cns){
    console = cns;
}

bool LogicObjectParser::search(LogicViewPalette palette){
    // elenco dei file presenti nel percorso
    QStringList file_list;

    VersionFileParser parser;
    parser.setSearchPath(path);
    parser.setConsoleSurf(console);

    surface->setPalette(palette);

    // avvio la ricerca
    bool res = parser.execute();

    if(res){
        qInfo() << "Start search in files list for classes and modules" << endl;
        // posso controllare i risultati
        file_list = parser.getResults();
        // numero di file presenti nella lista
        int files_num = file_list.count();
        // scorro i file
        progress->setMaximum(files_num);
        for(int index = 0; index < files_num; index++){
            qInfo() << "Cicle n: " << index << endl;
            // controllo se esiste un risultato con questo indice
            qInfo() << "Check file name: " << file_list[index] << endl;
            if(file_list[index] != "" && file_list[index] != "." && file_list[index] != ".."){
                qInfo() << "file name ok" << endl << " check file splitted in . : ";
                // divido il file nei . per controllarne l'estensione
                QStringList f_spl = file_list[index].split('.');
                qInfo() << f_spl << endl;
                if(f_spl.count() == 2){
                    // controllo se l'estensione del file corrente è .cpp
                    qInfo() << "Check file extension (must be cpp): " << f_spl[1] << endl;
                    if(f_spl[1] == "cpp"){
                        // ho trovato un sorgente cpp
                        qInfo() << "Found cpp file" << endl;
                        // controllo se esiste un altro file dopo questo
                        int next_index = index + 1;
                        qInfo() << "next index for header file: " << next_index << endl;
                        if((next_index) < files_num){
                            // esiste un file dopo questo
                            // calcolo il nome del file e la sua estensione
                            QStringList file_split = file_list[next_index].split('.');
                            // controllo se esiste tutto il necessario
                            if(file_split.count() == 2){
                                qInfo() << "Check after file extension (must be h): " << file_split[1] << endl;
                                // controllo se si tratta di una classe
                                if(file_split[1] == "h"){
                                    qInfo() << "Potential class found. File ok: " << file_list[index] << endl;
                                    // ho trovato una potenziale classe
                                    // avvio il parser della classe
                                    LogicClassParser par;
                                    par.setSearchPath(file_split[0]);
                                    bool res = par.search();

                                    // controllo
                                    if(res){
                                        if(par.isClass()){
                                            qInfo() << "Class effectiveli found. " << endl;
                                            // classe trovata
                                            LogicClass *result = par.getResultClass();
                                            // aggiungo l'oggetto alla vista
                                            QTreeWidgetItem *item = new QTreeWidgetItem();
                                            item->setText(0, result->getName());
                                            item->setText(1, result->getBasePath());
                                            item->setText(2, "Classe");
                                            // imposto i colori di sfondo
                                            item->setBackground(0, palette.getClassBackground());
                                            item->setBackground(1, palette.getClassBackground());
                                            item->setBackground(2, palette.getClassBackground());
                                            // imposto il colore del testo
                                            item->setForeground(0, palette.getClassForeground());
                                            item->setForeground(1, palette.getClassForeground());
                                            item->setForeground(2, palette.getClassForeground());
                                            item->setIcon(0, QIcon(":/icons/logics/Icons/class_icon.png"));

                                            surface->addTopLevelItem(item);

                                            // cerco le funzioni
                                            LogicFunctionParser func_par;
                                            func_par.setParent(item);
                                            func_par.setSearchPath(file_list[next_index]);
                                            func_par.search(palette);
                                        }
                                    }
                                }
                                else{
                                    // non è una classe ma un modulo
                                    QTreeWidgetItem *item = new QTreeWidgetItem();
                                    item->setText(0, QFileInfo(QFile(file_list[index]).fileName()).baseName());
                                    item->setText(1, file_list[index]);
                                    item->setText(2, "Modulo");
                                    item->setIcon(0, QIcon(":/icons/logics/Icons/module_icon.png"));

                                    surface->addTopLevelItem(item);
                                }
                            }
                            else{
                                console->appendHtml("<br>Found file without extension");
                            }

                        }
                    }
                    else{
                        // do informazioni sul file non riconosciuto
                        qInfo() << "Found file with a different extension: " << file_list[index] << endl;
                    }
                }
                else{
                    // trovato file senza estensione
                    qInfo() << "Found file without extension: " << file_list[index] << endl;
                }
            }
            else{
                qInfo() << "File name not acceptable" << file_list[index] << endl;
            }
            // aumento la barra di stato
            progress->setValue(index + 1);
            // aggiorno la finestra
            window->repaint();
        }
    }
    return true;
}

void LogicObjectParser::setWindowInfo(QMainWindow *frame, QProgressBar *bar)
{
    window = frame;
    progress = bar;
}
