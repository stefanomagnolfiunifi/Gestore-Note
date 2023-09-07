//
// Created by Stefano  Magnolfi on 09/08/2023.
//

#ifndef GESTORENOTE_COUNTEROBSERVER_H
#define GESTORENOTE_COUNTEROBSERVER_H
#include "Observer.h"
#include "VariousCollection.h"
#include <iostream>

class CounterObserver : public Observer{
public:
    explicit CounterObserver(VariousCollection* c): noteCount(0), collection(c){
        collection->addObserver(this);
    };
    ~CounterObserver() override{
        collection->removeObserver(this);
    }
    int getNoteCount() const {
        return noteCount;
    }

    void setNoteCount(int noteCount) {
        CounterObserver::noteCount = noteCount;
    }
    void update(int c) override{
        noteCount = c;
        std::cout<<"The count of notes in "<<collection->getName()<<" collection is: "<<noteCount<<std::endl;
    }
private:
    int noteCount;
    VariousCollection* collection;
};
#endif //GESTORENOTE_COUNTEROBSERVER_H
