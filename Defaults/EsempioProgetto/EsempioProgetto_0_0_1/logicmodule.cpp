#include "logicmodule.h"

LogicModule::LogicModule()
{

}

void LogicModule::createOnDisk(){
    // controllo che sia stato impostato tutto
    if(getName() != "" && getBasePath() != ""){
        // creo il file header
        QString module_base_path = getBasePath() + "\\" + getName();

        // percorso file header
        QFile header(module_base_path + ".h");

        // controllo se si è aperto
        if(header.open(QIODevice::WriteOnly | QIODevice::Text)){
            // creo lo stream di testo per scrivere
            QTextStream out (&header);
            // contiene il valore della macro per l'esecuzione singola
            QString macro = getName().toUpper() + "_MODULE_H";
            out << "#ifndef " << macro << endl;
            out << "#define " << macro << endl << endl;
            out << "/* " << "modulo " << getName() << endl;
            out << " orario creazione: " << QDateTime::currentDateTime().toString() << endl;
            out << getDescription() << endl;
            out << "*/ " << endl << "#endif" << endl;

            out.flush();

            header.close();

            // creo il file implementazione
            QFile implementation(module_base_path + ".cpp");

            // controllo
            if(implementation.open(QIODevice::WriteOnly | QIODevice::Text)){
                // creo lo stream
                QTextStream impl(&implementation);

                impl << "#include " << '"' << module_base_path + ".h" << '"' << endl;

                impl.flush();

                implementation.close();

                QMessageBox *msg = new QMessageBox();
                msg->setText("Creazione modulo " + getName() + " avvenuta con successo: percorso " + getBasePath());
                msg->setIcon(QMessageBox::Information);
                msg->exec();
            }
            else{
                QMessageBox *msg = new QMessageBox();
                msg->setText("Errore nella creazione del file di implementazione. File: " + module_base_path + ".cpp");
                msg->setIcon(QMessageBox::Critical);
                msg->exec();
            }
        }
        else{
            QMessageBox *msg = new QMessageBox();
            msg->setText("Errore nella creazione dell modulo " + getName());
            msg->setIcon(QMessageBox::Critical);
            msg->exec();
        }
    }
}

QTreeWidgetItem* LogicModule::formatForView(QTreeWidgetItem *parent){
    // creo l'item
    QTreeWidgetItem *item = new QTreeWidgetItem(parent);
    // creo l'icona
    QIcon icon(":/icons/logics/Icons/module_icon.png");

    item->setText(0, getName());
    item->setText(1, getBasePath());
    item->setText(2, "Modulo");

    item->setIcon(0, icon);

    return item;
}
