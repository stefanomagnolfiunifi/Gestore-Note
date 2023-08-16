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
    virtual void addNote(Nota& nota){
        if(!nota.isBlocked())
            notesList.push_back(nota);
    }
    virtual bool removeNote(Nota& nota){
        auto it=std::find(notesList.begin(), notesList.end(), nota);
        if(it!=notesList.end()){
            notesList.erase(it);
            return true;
        }
        return false;
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
