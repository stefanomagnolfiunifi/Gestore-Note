//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#ifndef GESTORENOTE_NOTA_H
#define GESTORENOTE_NOTA_H

#include <iostream>
#include <list>
class Nota {
public:
    Nota(const std::string& title,const std::string& text, bool blocked = false): title(title), text(text), blocked(blocked){};
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    const std::string &getText() const;
    void setText(const std::string &text);
    bool isBlocked() const;
    bool isBelonged() const;
    bool isImportant() const;
    void setImportant();
    void setNotImportant();
    void setBelong();
    void setNotBelong();
    void block();
    void unblock();
    void modify(const std::string& ti, const std::string& te, bool b);
    bool operator==(const Nota& n) const;
private:
    std::string title;
    std::string text;
    bool blocked;
    bool belongToCollection = false;
    bool important = false;
};


#endif //GESTORENOTE_NOTA_H
