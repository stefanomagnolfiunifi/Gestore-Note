//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#ifndef GESTORENOTE_VARIOUSCOLLECTION_H
#define GESTORENOTE_VARIOUSCOLLECTION_H

#include <iostream>
#include "Nota.h"
#include "Observer.h"
struct Collection {
    std::string name;
    std::list<Nota> notes;
};

class VariousCollection : public Observer{
public:
    void update() override;
private:
    std::list<Collection> variousCollection;
};



#endif //GESTORENOTE_VARIOUSCOLLECTION_H
