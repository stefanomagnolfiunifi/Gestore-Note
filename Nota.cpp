//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#include "Nota.h"
#include "Collection.h"

const std::string &Nota::getTitle() const {
    return title;
}
void Nota::setTitle(const std::string &newTitle) {
    if(!blocked){
        Nota::title = newTitle;
    }
}
const std::string &Nota::getText() const {
    return text;
}
void Nota::setText(const std::string &newText) {
    if(!blocked){
        Nota::text = newText;
    }
}
bool Nota::isBelonged() const {
    return belongToCollection;
}
void Nota::setBelong() {
    belongToCollection = true;
}
void Nota::setNotBelong() {
    belongToCollection = false;
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

bool Nota::isImportant() const {
    return important;
}

void Nota::setImportant() {
    important = true;
}

void Nota::setNotImportant() {
    important = false;
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
