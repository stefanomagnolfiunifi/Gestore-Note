//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#ifndef GESTORENOTE_OBSERVER_H
#define GESTORENOTE_OBSERVER_H

class Observer{
public:
    virtual ~Observer() = default;
    virtual void update(int c) = 0 ;
};
#endif //GESTORENOTE_OBSERVER_H
