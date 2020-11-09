#include "logicclassparser.h"

LogicClassParser::LogicClassParser()
{

}

void LogicClassParser::setSearchPath(QString class_path){
    path = class_path;
}

LogicClass* LogicClassParser::getResultClass(){
    return result_class;
}

LogicModule* LogicClassParser::getResultModule(){
    return result_module;
}

bool LogicClassParser::search(){
    // file header
    QFile header(path + ".h");
    // apro il file
    if(header.open(QIODevice::ReadOnly)){
        QString curline;

        QTextStream in(&header);
        // leggo il file fino a quando non sono alla fine
        while(!in.atEnd()){
            // leggo una riga
            curline = in.readLine();

            // controllo se non è un commento
            if(!curline.startsWith("//")){
                // controllo se non si tratta di una macro
                if(!curline.startsWith("#")){
                    // controllo se contiene una definizione di classe
                    if(curline.startsWith("class ")){
                        // si tratta di una definizione di classe
                        is_class = true;
                        // creo l'elemento logico
                        result_class = new LogicClass();
                        // salvo il nome
                        QString class_name = curline.split(' ')[1];
                        qInfo() << "Detected class with name: " << class_name;
                        // controllo se contiene :
                        if(class_name.contains(':')){
                            class_name.remove(':');
                        }
                        // controllo se contiene {
                        if(class_name.contains('{')){
                            class_name.remove('{');
                        }
                        // salvo il nome della classe
                        result_class->setName(class_name);
                        // salvo il percorso
                        result_class->setBasePath(path);
                        qInfo() << "Detected class in path " << path ;
                    }
                }
            }
        }
        header.close();
        return true;
    }
    else{
        return false;
    }
}

bool LogicClassParser::isClass(){
    return is_class;
}
