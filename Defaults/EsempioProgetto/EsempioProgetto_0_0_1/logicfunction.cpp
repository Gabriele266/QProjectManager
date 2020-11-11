#include "logicfunction.h"

LogicFunction::LogicFunction()
{

}

void LogicFunction::setStatic(bool val){
    is_static = val;
}

void LogicFunction::setVirtual(bool val){
    is_virtual = val;
}

void LogicFunction::setReturnType(QString type){
    return_type = type;
}

void LogicFunction::setScope(LogicClassScope s){
    scope = s;
}

void LogicFunction::setArguments(QString a){
    arguments = a;
}

QString LogicFunction::getFormatted(){
    // formatto la funzione
    QString buffer = "";

    if(is_static){
        buffer += "static ";
    }
    if(is_virtual){
        buffer += "virtual ";
    }

    buffer += LogicClass::getFromScope(scope);

    buffer += " " + getName();
    buffer += "(" + arguments + "){\n}";
    return buffer;
}
