//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#include "Nota.h"

const std::string &Nota::getTitle() const {
    return title;
}
void Nota::setTitle(const std::string &title) {
    if(!blocked){
        Nota::title = title;
    }
}
const std::string &Nota::getText() const {
    return text;
}
void Nota::setText(const std::string &text) {
    if(!blocked){
        Nota::text = text;
    }
}
bool Nota::isBlocked() const {
    return blocked;
}
void Nota::setBlocked(bool blocked) {
    Nota::blocked = blocked;
}

void Nota::modify(const std::string& ti, const std::string& te, bool b){
    if(!blocked){
        title = ti;
        text = te;
        blocked = b;
    }
}

void Nota::addObserver(Observer* o){
    observers.push_back(o);
}
void Nota::removeObserver(Observer* o){
    observers.remove(o);
}

void Nota::notify(){
    for(auto x : observers){
        x->update();
    }
}
