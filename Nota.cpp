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
void Nota::block(){
    blocked = true;
}
void Nota::unblock(){
    blocked = false;
}
bool Nota::isBlocked() const {
    return blocked;
}

void Nota::modify(const std::string& ti, const std::string& te, bool b){
    if(!blocked){
        title = ti;
        text = te;
        blocked = b;
    }
}
bool Nota::operator==(const Nota& n) const{
    return title==n.title;
}
