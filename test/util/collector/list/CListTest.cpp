//
// Created by José Acuña on 12/03/2019.
//

#include <gtest/gtest.h>
#include "../../../../src/util/collector/list/CList.h"

struct CListTest : testing::Test {
    CList *list;
    CListTest() : list(new CList) {
        list->add(new Node);
        list->add(new Node);
        list->add(new Node);
        list->add(new Node);
    }

    ~CListTest() override { delete list; }
};

TEST_F(CListTest, Add_Test) {
    list = new CList;

    EXPECT_EQ(list->getHead(), nullptr);

    Node *n1 = new Node;
    Node *n2 = new Node;
    Node *n3 = new Node;

    list->add(n1);
    list->add(n2);
    list->add(n3);

    EXPECT_EQ(list->getHead()->getNode(), n1);
    EXPECT_EQ(list->getTail()->getNode(), n3);
    EXPECT_EQ(list->getHead()->getNext()->getNode(), n2);
}

TEST_F(CListTest, Remove_Test) {
    list->remove(0);

    EXPECT_TRUE(list->getHead()->isFree());
    EXPECT_FALSE(list->getTail()->isFree());

    list->remove(3);

    EXPECT_TRUE(list->getTail()->isFree());
}