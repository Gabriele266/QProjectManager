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
    // controllo se sono nulli
    if(a != ""){
        arguments = a;
    }
    else{
        arguments = "void";
    }
}

void LogicFunction::setIsConstructor(bool val)
{
    is_constructor = val;
}

bool LogicFunction::isConstructor(){
    return is_constructor;
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

bool LogicFunction::isVirtual()
{
    return is_virtual;
}



QString LogicFunction::getArguments(){
    if(arguments != ""){
        return arguments;
    }
    else{
        return "void";
    }
}

bool LogicFunction::isStatic(){
    return is_static;
}

LogicClassScope LogicFunction::getScope(){
    return scope;
}

QString LogicFunction::getReturnType(){
    if(!is_constructor){
        return return_type;
    }
    else{
        return "Costruttore";
    }
}


