#include "logicviewpalette.h"

LogicViewPalette::LogicViewPalette()
{

}

void LogicViewPalette::setClassBackground(QColor color){
    class_background = color;
}

void LogicViewPalette::setFunctionBackground(QColor color){
    function_background = color;
}

void LogicViewPalette::setFunctionForeground(QColor color){
    function_foreground = color;
}

void LogicViewPalette::setClassForeground(QColor color){
    class_foreground = color;
}

void LogicViewPalette::setConstructorBackground(QColor color){
    constructor_background = color;
}

void LogicViewPalette::setConstructorForeground(QColor color){
    constructor_foreground = color;
}

QColor LogicViewPalette::getFunctionBackground(){
    return function_background;
}

QColor LogicViewPalette::getClassBackground(){
    return function_background;
}

QColor LogicViewPalette::getClassForeground(){
    return class_foreground;
}

QColor LogicViewPalette::getFunctionForeground(){
    return function_foreground;
}

QColor LogicViewPalette::getConstructorBackground(){
    return constructor_background;
}

QColor LogicViewPalette::getConstructorForeground(){
    return constructor_foreground;
}

