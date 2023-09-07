//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#ifndef GESTORENOTE_SUBJECT_H
#define GESTORENOTE_SUBJECT_H
#include "Observer.h"
class Subject{
public:
    virtual ~Subject() = default;
    virtual void addObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
    virtual void notify() = 0;
};
#endif //GESTORENOTE_SUBJECT_H
