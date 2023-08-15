//
// Created by Stefano  Magnolfi on 08/08/2023.
//

#ifndef GESTORENOTE_NOTA_H
#define GESTORENOTE_NOTA_H

#include <iostream>
#include <list>
class Collection;
class Nota {
public:
    Nota(const std::string& title,const std::string& text, Collection& collection, bool blocked = false): title(title), text(text), collection(&collection), blocked(blocked){
        addToCollection(&collection);
    };
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    const std::string &getText() const;
    void setText(const std::string &text);
    bool isBlocked() const;
    Collection *getCollection() const;
    void setCollection(Collection *collection);
    void addToCollection(Collection *collection);
    void block();
    void unblock();
    void modify(const std::string& ti, const std::string& te, bool b);
    void remove();
    bool operator==(const Nota& n) const;
private:
    std::string title;
    std::string text;
    bool blocked;
    Collection* collection;
};


#endif //GESTORENOTE_NOTA_H
