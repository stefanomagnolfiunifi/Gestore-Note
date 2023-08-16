//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#ifndef GESTORENOTE_VARIOUSCOLLECTION_H
#define GESTORENOTE_VARIOUSCOLLECTION_H

#include <iostream>
#include "Collection.h"
#include "Subject.h"

class VariousCollection : public Collection, public Subject{
public:
    explicit VariousCollection(const std::string& n):Collection(n){};
    void addNote(Nota& nota) override{
        if(!nota.isBelonged()){
            Collection::addNote(nota);
            nota.setBelong();
            notify();
        }
    }
    bool removeNote(Nota& nota) override{
        if(Collection::removeNote(nota)){
            nota.setNotBelong();
            notify();
            return true;
        }
        return false;
    }
    void addObserver(Observer* o) override{
        observers.push_back(o);
    }
    void removeObserver(Observer* o) override{
        observers.remove(o);
    }
    void notify() override{
        for(auto x:observers){
            x->update(static_cast<int> (notesList.size()));
        }
    }
private:
    std::list<Observer*> observers;
};



#endif //GESTORENOTE_VARIOUSCOLLECTION_H
