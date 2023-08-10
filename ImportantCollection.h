//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#ifndef GESTORENOTE_IMPORTANTCOLLECTION_H
#define GESTORENOTE_IMPORTANTCOLLECTION_H

#include <list>
#include "Collection.h"
#include "Observer.h"
class ImportantCollection : public Collection{
public:
    ImportantCollection(): Collection("Importants"){};

};


#endif //GESTORENOTE_IMPORTANTCOLLECTION_H
