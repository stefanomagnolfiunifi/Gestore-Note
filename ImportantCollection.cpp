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