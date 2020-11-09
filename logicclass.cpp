#include "logicclass.h"

LogicClass::LogicClass()
{

}

void LogicClass::setParent(LogicObject *par){
    parent = par;
}

void LogicClass::createOnDisk(){
    // controllo i prerequisiti
    if(getBasePath() != ""){
        // nome del file senza estensione
        QString file_name = getBasePath() + "\\" + getName();

        //creo l'header
        QFile header(file_name + ".h");
        // creo lo stream
        QTextStream out (&header);

        // controllo se il file è aperto
        if(header.open(QIODevice::WriteOnly | QIODevice::Text)){
            // formatto il marcatore
            QString place = (getName() + "_HEADER").toUpper();

            out << "#ifndef " << place << endl;
            out << "#define " << place << endl;
            // controllo se scrivere le informazioni
            if(write_creation_info){
                out << "/** " << endl << "classe creata dal programma Project Manager" << endl;
                out << "* \tdata di creazione:" << QDateTime::currentDateTime().toString() << endl;
                out << "* \t" << getDescription() << endl;
                out << "**/" << endl;
            }
            // metto l intestazione della classe
            out << endl << "class " << getName();
            // controllo se eredita qualcosa
            if(inherits.count() > 0){
                out << " : ";
                // scorro le classi da ereditare
                for(int x = 0; x < inherits.count(); x++){
                    if(x > 0){
                        out << ", ";
                    }
                    out << inheriting_scopes[x] << inherits[x];
                }
            }
            out << "{" << endl;
            // controllo l'incapsulamento
            if(incapsulate_public){
                out << "public: " << endl;
                // controllo se mettere un costruttore
                if(create_constructor){
                    // creo il costruttore di default
                    out << "\t" << getName() << "(";
                    // scrivo i parametri
                    out << constructor_arguments << ")";
                    // controllo se eredita
                    if(constructor_inherits != ""){
                        out << " : " << constructor_inherits;
                    }
                    out << " ;" << endl;

                    // creo gli eventuali costruttori aggiuntivi
                    for(int x = 0; x < additional_constructors.count(); x++){
                        out << "\t" << getName() << "(" << additional_constructors[x] << ");" << endl;
                    }
                }
                if(create_destructor){
                    out << endl << "\t" << "~" << getName() << "();" << endl;
                }
            }
            if(incapsulate_private){
                out << "private: " << endl;
            }
            if(incapsulate_protected){
                out << "protected: " << endl;
            }
            out << "};";
            out << "#endif" << endl;
        }
        out.flush();
        header.close();

        // creo l'implementazione
        QFile implement(file_name + ".cpp");
        // stream testo
        QTextStream out2(&implement);

        // controllo se il file è aperto
        if(implement.open(QIODevice::WriteOnly | QIODevice::Text)){
            out2 << "#include " << '"' << file_name << ".h" << '"' << endl;
            out2 << endl << getName() << "::" << getName() << "(){" << endl <<endl << "}";
            // scrivo
            out2.flush();
            // chiudo il file
            implement.close();
            // mostro il successo
            QMessageBox *msg = new QMessageBox();
            msg->setText("Creazione classe" + getName() + "Avvenuta con successo. Percorso classe: " + file_name);
            msg->setIcon(QMessageBox::Information);
            msg->exec();
        }
        else{
            QMessageBox *msg = new QMessageBox();
            msg->setText("Errore nella creazione del file di implementazione della classe " + getName() + ". Percorso file da creare: " + file_name +".cpp");
            msg->setIcon(QMessageBox::Critical);
            msg->exec();
        }

    }
    else{
        QMessageBox *msg = new QMessageBox();
        msg->setText("Errore nella creazione della classe. Non tutti i parametri sono stati specificati correttamente");
        msg->setIcon(QMessageBox::Critical);
        msg->exec();
    }
    // creo il file header
}

QTreeWidgetItem* LogicClass::formatForView(QTreeWidgetItem *parent){
    // creo l'item
    QTreeWidgetItem *item = new QTreeWidgetItem(parent);
    // imposto il testo
    item->setText(0, getName());
    item->setText(1, getBasePath());
    item->setText(2, "Classe");

    // imposto l'icona
    QIcon icon(":/icons/logics/Icons/class_icon.png");

    item->setIcon(0, icon);

    return item;
}

void LogicClass::addConstructor(QString arguments){
    additional_constructors.append(arguments);
}

void LogicClass::addInheritingClass(QString className, QString classIncludePath, LogicClassScope scope)
{
    inherits.append(className);
    class_path.append(classIncludePath);
    inheriting_scopes[scopes] = scope;

    scopes ++;
}

void LogicClass::setConstructorArguments(QString args){
    constructor_arguments = args;
}

void LogicClass::setConstructorInherits(QString in){
    constructor_inherits = in;
}

void LogicClass::setCreateConstructor(bool val){
    create_constructor = val;
}

void LogicClass::setCreateDestructor(bool val){
    create_destructor = val;
}

void LogicClass::setEncapsulateScopes(bool publ, bool priv, bool protec){
    incapsulate_private = priv;
    incapsulate_protected = protec;
    incapsulate_public = publ;
}

void LogicClass::setWriteInfo(bool val){
    write_creation_info = val;
}

LogicClassScope LogicClass::getFromString(QString str)
{
    // conversione della stringa in caratteri maiuscoli
    QString upp = str.toUpper();
    // conrollo
    if(upp == "PRIVATE"){
        return LogicClassScope::Private;
    }
    else if(upp == "PUBLIC"){
        return LogicClassScope::Public;
    }
    else if(upp == "PROTECTED"){
        return LogicClassScope::Protected;
    }
}

QString LogicClass::getFromScope(LogicClassScope scope)
{
    if(scope == LogicClassScope::Private){
        return "private";
    }
    else if(scope == LogicClassScope::Protected){
        return "protected";
    }
    else if(scope == LogicClassScope::Public){
        return "public";
    }
}
