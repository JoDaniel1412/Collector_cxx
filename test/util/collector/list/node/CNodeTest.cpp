//
// Created by José Acuña on 12/03/2019.
//

#include <gtest/gtest.h>
#include "../../../src/util/collector/list/node/CNode.h"

TEST(CNodeTest, Getters_Setters) {
    CNode *node = new CNode();

    EXPECT_EQ(node->getNode(), nullptr);
    EXPECT_EQ(node->getNext(), nullptr);
    EXPECT_TRUE(node->isFree());

    CNode *node2 = new CNode();

    node->setNode(new Node);
    node->setFree(false);
    node->setNext(node2);

    EXPECT_TRUE(node->getNode() != nullptr);
    EXPECT_EQ(node->getNext(), node2);
    EXPECT_FALSE(node->isFree());
}