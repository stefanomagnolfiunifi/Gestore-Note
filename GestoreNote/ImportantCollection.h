//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#ifndef GESTORENOTE_IMPORTANTCOLLECTION_H
#define GESTORENOTE_IMPORTANTCOLLECTION_H

#include <list>
#include "Nota.h"
#include "Observer.h"
class ImportantCollection : public Observer{
public:
    void update() override;
private:
    std::list<Nota> listImportants;
};


#endif //GESTORENOTE_IMPORTANTCOLLECTION_H
