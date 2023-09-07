#include "gtest/gtest.h"
#include "../ImportantCollection.h"

TEST(ImportantCollection, checkAddRemove){
    Nota nota("testTitle", "testText");
    ImportantCollection* importantCollection = ImportantCollection::getInstance();
    importantCollection->addNote(nota);
    EXPECT_TRUE(nota.isImportant());
    importantCollection->removeNote(nota);
    EXPECT_FALSE(nota.isImportant());
}

TEST(ImportantCollection, checkSingleton){
    ImportantCollection* importantCollection = ImportantCollection::getInstance();
    ImportantCollection* importantCollection2 = ImportantCollection::getInstance();
    EXPECT_EQ(importantCollection, importantCollection2);
}