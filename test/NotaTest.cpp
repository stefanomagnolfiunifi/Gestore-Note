#include "gtest/gtest.h"
#include "../Nota.h"

TEST(Nota, checkConstructor){
    Nota nota("testTitle", "testText");
    EXPECT_EQ("testTitle", nota.getTitle());
    EXPECT_EQ("testText", nota.getText());
    EXPECT_FALSE(nota.isBlocked());
    Nota nota2("testTitle2", "testText2",true);
    EXPECT_EQ("testTitle2", nota2.getTitle());
    EXPECT_EQ("testText2", nota2.getText());
    EXPECT_TRUE(nota2.isBlocked());
}

TEST(Nota, checkSetters){
    Nota nota("testTitle", "testText");
    nota.setText("newText");
    nota.setTitle("newTitle");
    EXPECT_EQ("newTitle", nota.getTitle());
    EXPECT_EQ("newText", nota.getText());
    nota.block();
    nota.setText("newNewText");
    nota.setTitle("newNewTitle");
    EXPECT_EQ("newTitle", nota.getTitle());
    EXPECT_EQ("newText", nota.getText());
}
TEST(Nota, checkModify){
    Nota nota("testTitle", "testText");
    nota.modify("newTitle","newText", true);
    EXPECT_EQ("newTitle", nota.getTitle());
    EXPECT_EQ("newText", nota.getText());
    EXPECT_TRUE(nota.isBlocked());
}
TEST(Nota, checkNotModify){
    Nota nota("testTitle", "testText", true);
    nota.modify("newTitle","newText", false);
    EXPECT_EQ("testTitle", nota.getTitle());
    EXPECT_EQ("testText", nota.getText());
    EXPECT_TRUE(nota.isBlocked());
}

