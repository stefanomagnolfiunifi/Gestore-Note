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
    static ImportantCollection* getInstance();
    void addNote(Nota &nota) override;
    bool removeNote(Nota &nota) override;
private:
    ImportantCollection(): Collection("Importants"){};
    static ImportantCollection* instance;
};


#endif //GESTORENOTE_IMPORTANTCOLLECTION_H
