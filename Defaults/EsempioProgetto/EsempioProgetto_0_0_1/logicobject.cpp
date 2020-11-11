#include "logicobject.h"

LogicObject::LogicObject()
{

}

void LogicObject::setName(QString n){
    name = n;
}

void LogicObject::setDescription(QString descr){
    description = descr;
}

void LogicObject::setBasePath(QString path){
    base_path = path;
}

QString LogicObject::getDescription(){
    return description;
}

QString LogicObject::getName(){
    return name;
}

QString LogicObject::getBasePath(){
    return base_path;
}

QTreeWidgetItem* LogicObject::formatForView(QTreeWidgetItem *parent){
    // elemento da aggiungere
    QTreeWidgetItem *item = new QTreeWidgetItem(parent);

    item->setText(0, "Oggetto " + name);
    item->setText(1, description);

    return item;
}
