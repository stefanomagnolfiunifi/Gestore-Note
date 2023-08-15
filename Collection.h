//
// Created by Stefano  Magnolfi on 09/08/2023.
//

#ifndef GESTORENOTE_COLLECTION_H
#define GESTORENOTE_COLLECTION_H
#include "Nota.h"
#include <list>
#include <algorithm>
class Collection{
public:
    explicit Collection(const std::string& name):name(name){};
    //virtual ~Collection() = 0;
    virtual void addNote(const Nota& n){
        if(!n.isBlocked())
            notesList.push_back(n);
    }
    virtual void removeNote(const Nota& n){
        auto it=std::find(notesList.begin(), notesList.end(), n);
        if(it!=notesList.end())
            notesList.erase(it);
    }

    virtual void printAllNotes(){
        if(notesList.empty()){
            std::cout<<"The "<<name<<" collection is empty";
        }
        else{
            std::cout<<"The "<<name<<" collection has: "<<std::endl;
            for(const auto& nota : notesList){
                std::cout<<nota.getTitle()<<" ";
            }
        }
        std::cout<<std::endl;
    }
    const std::string& getName()const{
        return name;
    }
protected:
    std::string name;
    std::list<Nota> notesList;

};
#endif //GESTORENOTE_COLLECTION_H
