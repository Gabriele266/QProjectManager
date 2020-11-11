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

bool LogicObjectParser::search(){
    // elenco dei file presenti nel percorso
    QStringList file_list;

    VersionFileParser parser;
    parser.setSearchPath(path);
    parser.setConsoleSurf(console);

    // avvio la ricerca
    bool res = parser.execute();

    if(res){
        // posso controllare i risultati
        file_list = parser.getResults();

        // scorro i file
        for(int index = 0; index < file_list.count(); index++){
            // controllo se l'estensione del file corrente è .cpp
            if(file_list[index].split('.')[1] == "cpp"){
                // ho trovato un sorgente cpp
                // controllo se si tratta di una classe
                if(file_list[index + 1].split('.')[1] == "h"){
                    // ho trovato una potenziale classe
                    LogicClassParser par;
                    par.setSearchPath(file_list[index].split('.')[0]);
                    bool res = par.search();

                    // controllo
                    if(res){
                        if(par.isClass()){
                            // classe trovata
                            LogicClass *result = par.getResultClass();
                            // aggiungo l'oggetto alla vista
                            QTreeWidgetItem *item = new QTreeWidgetItem();
                            item->setText(0, result->getName());
                            item->setText(1, result->getBasePath());
                            item->setText(2, "Classe");

                            item->setIcon(0, QIcon(":/icons/logics/Icons/class_icon.png"));

                            surface->addTopLevelItem(item);
                        }

                    }
                }
            }
        }
    }
    return true;
}
