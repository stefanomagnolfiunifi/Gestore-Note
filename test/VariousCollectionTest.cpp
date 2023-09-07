#include "gtest/gtest.h"
#include "../VariousCollection.h"
#include "../CounterObserver.h"

TEST(VariousCollection, checkAddRemoveNote){
    Nota nota("testTitle", "testText");
    VariousCollection collection("testCollection");
    EXPECT_FALSE(nota.isBelonged());
    collection.addNote(nota);
    EXPECT_TRUE(nota.isBelonged());
    collection.removeNote(nota);
    EXPECT_FALSE(nota.isBelonged());
}
