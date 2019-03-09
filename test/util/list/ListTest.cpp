//
// Created by José Acuña on 27/02/2019.
//

#include <gtest/gtest.h>
#include "../../../src/util/list/List.h"

struct ListTest : testing::Test {
    List *list;

    ListTest() : list(new List) {
        // Fills the list : [3, 4, 5, 6]
        list->pushTail(4);
        list->pushTail(5);
        list->pushHead(3);
        list->pushTail(6);
    };

    ~ListTest() override { delete list; }
};

TEST_F(ListTest, PushHead_PushTail_Test) {
    list->clean();

    EXPECT_EQ(0, list->getSize()); // Empty list

    // Fills the list
    list->pushTail(4);
    list->pushTail(5);
    list->pushHead(3);
    list->pushTail(6);
    list->pushHead(2);
    list->pushTail(7);
    list->pushHead(1);

    EXPECT_EQ(list->getSize(), 7);
    EXPECT_EQ(list->getHead(), 1);
    EXPECT_EQ(list->getTail(), 7);
}

TEST_F(ListTest, GetValue_Test) {

    EXPECT_EQ(list->getValue(0), 3);
    EXPECT_EQ(list->getValue(3), 6);

    EXPECT_ANY_THROW(list->getValue(-1));
    EXPECT_ANY_THROW(list->getValue(6));
}

TEST_F(ListTest, DeleteValue_Test) {

    list->deleteValue(2);
    EXPECT_TRUE(list->getValue(2) != 5);
    EXPECT_EQ(list->getSize(), 3);

    list->deleteValue(0); // Deletes the head from the list
    EXPECT_EQ(list->getHead(), 4);
    EXPECT_EQ(list->getSize(), 2);

    EXPECT_ANY_THROW(list->getValue(2));

    list->deleteValue(1);
    EXPECT_EQ(list->getTail(), list->getHead()); // Deletes the tail and left the list in one element
    EXPECT_EQ(list->getSize(), 1);
}