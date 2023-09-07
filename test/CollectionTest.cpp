#include "gtest/gtest.h"
#include "../Collection.h"

TEST(Collection, checkPrintAllNotes){
    Collection collection("testName");
    Nota nota("testTitle", "testText");
    Nota nota2("testTitle2", "testText2");
    EXPECT_NO_FATAL_FAILURE(collection.printAllNotes());
    collection.addNote(nota);
    collection.addNote(nota2);
    EXPECT_NO_FATAL_FAILURE(collection.printAllNotes());
}