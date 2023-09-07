#include "gtest/gtest.h"
#include "../CounterObserver.h"

TEST(CounterObserver, checkConstructorDestructorHeap){
    VariousCollection collection("testTitle");
    auto counterObserver = new CounterObserver(&collection);
    EXPECT_EQ(1,collection.getObservers().size());
    delete counterObserver;
    EXPECT_EQ(0,collection.getObservers().size());
}

TEST(CounterObserver, checkConstructorDestructorStack){
    VariousCollection collection("testTitle");
    {
        CounterObserver counterObserver(&collection);
        EXPECT_EQ(1,collection.getObservers().size());
    }
    EXPECT_EQ(0,collection.getObservers().size());
}

TEST(CounterObserver, checkUpdate){
    VariousCollection collection("testCollection");
    CounterObserver counterObserver(&collection);
    counterObserver.update(20);
    EXPECT_EQ(20,counterObserver.getNoteCount());
}


