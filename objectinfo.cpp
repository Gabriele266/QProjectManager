#include "objectinfo.h"

ObjectInfo::ObjectInfo()
{
    notes_path = "none";
}

void ObjectInfo::setCompany(QString val)
{
    company = val;
}

QSysInfo ObjectInfo::getSystemInfo()
{
    return platform_info;
}

QString ObjectInfo::getAuthor(){
    return author;
}

QString ObjectInfo::getCompany(){
    return company;
}

QDateTime ObjectInfo::getCreationTime(){
    return creation_time;
}

QDateTime ObjectInfo::getLastModifyTime(){
    return last_modify_time;
}

QString ObjectInfo::getMainIndexPath(){
    return main_index_path;
}

ObjectTextEncoding ObjectInfo::getNotesEncoding(){
    return notes_encoding;
}

QString ObjectInfo::getDescription(){
    return description;
}

QString ObjectInfo::getNotesPath(){
    return notes_path;
}

void ObjectInfo::setAuthor(QString val){
    author = val;
}

void ObjectInfo::setCreationTime(QDateTime time){
    creation_time = time;
}

void ObjectInfo::setDescription(QString des){
    description = des;
}

void ObjectInfo::setLastModifyTime(QDateTime time){
    last_modify_time = time;
}

void ObjectInfo::setMainIndexPath(QString path){
    main_index_path = path;
}

void ObjectInfo::setNotesEncodingType(ObjectTextEncoding info){
    notes_encoding = info;
}

void ObjectInfo::setNotesPath(QString path){
    notes_path = path;
}

