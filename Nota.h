//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#ifndef GESTORENOTE_NOTA_H
#define GESTORENOTE_NOTA_H

#include <iostream>
#include <list>
#include "Observer.h"
#include "Subject.h"

class Nota {
public:
    Nota(const std::string& title,const  std::string& text, bool blocked = false): title(title), text(text), blocked(blocked){

    };
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    const std::string &getText() const;
    void setText(const std::string &text);
    bool isBlocked() const;
    void block();
    void unblock();
    void modify(const std::string& ti, const std::string& te, bool b);
    void remove();
    bool operator==(const Nota& n) const;
private:
    std::string title;
    std::string text;
    bool blocked;
};


#endif //GESTORENOTE_NOTA_H
