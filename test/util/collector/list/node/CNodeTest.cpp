//
// Created by José Acuña on 12/03/2019.
//

#include <gtest/gtest.h>
#include "../../../src/util/collector/list/node/CNode.h"

TEST(CNodeTest, Getters_Setters) {
    CNode *node = new CNode();

    EXPECT_EQ(node->getNode(), nullptr);
}