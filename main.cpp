#include <iostream>
#include "Nota.h"
#include "ImportantCollection.h"
#include "VariousCollection.h"
#include "CounterObserver.h"


int main() {
    ImportantCollection* importantCollection = ImportantCollection::getInstance();
    VariousCollection collection1("Collection1");
    VariousCollection collection2("Collection2");
    CounterObserver counterObserver1(&collection1);
    CounterObserver counterObserver2(&collection2);

    Nota nota1("Titolo Nota1", "Testo Nota1");
    Nota nota2("Titola Nota2", "Testo Nota2");

    collection1.addNote(nota1);
    collection2.addNote(nota2);
    collection1.addNote(nota2);

    collection1.printAllNotes();
    collection1.removeNote(nota1);

    importantCollection->addNote(nota2);
    importantCollection->addNote(nota1);
    importantCollection->removeNote(nota2);


    collection1.printAllNotes();
    collection2.printAllNotes();
    importantCollection->printAllNotes();


   return 0;
}
