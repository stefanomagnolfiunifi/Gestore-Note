//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#include "ImportantCollection.h"
ImportantCollection* ImportantCollection::instance = nullptr;
ImportantCollection* ImportantCollection::getInstance() {
    if(instance == nullptr)
        instance = new ImportantCollection();
    return instance;
}

void ImportantCollection::addNote(Nota &nota) {
    if(!nota.isImportant()){
        Collection::addNote(nota);
        nota.setImportant();
    }
}

bool ImportantCollection::removeNote(Nota &nota) {
    if(Collection::removeNote(nota)){
        nota.setNotImportant();
        return true;
    }
    return false;
}