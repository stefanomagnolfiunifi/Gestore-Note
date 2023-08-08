//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#ifndef GESTORENOTE_NOTA_H
#define GESTORENOTE_NOTA_H

#include <iostream>
#include <list>
#include "Subject.h"

class Nota : public Subject{
public:
    Nota(const std::string& ti,const  std::string& te, bool b = false): title(ti), text(te), blocked(b){};
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    const std::string &getText() const;
    void setText(const std::string &text);
    bool isBlocked() const;
    void setBlocked(bool blocked);

    void modify(const std::string& ti, const std::string& te, bool b);
    void remove();
    void addObserver(Observer* o) override;
    void removeObserver(Observer* o) override;
    void notify() override;
private:
    std::string title;
    std::string text;
    bool blocked;

    std::list<Observer*> observers;
};


#endif //GESTORENOTE_NOTA_H
