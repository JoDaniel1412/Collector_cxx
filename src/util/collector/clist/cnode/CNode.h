//
// Created by José Acuña on 12/03/2019.
//

#ifndef HELLOWORLD_CNODE_H
#define HELLOWORLD_CNODE_H

#include "../../../list/node/Node.h"

class CNode {

private:
    Node *node = NUll;
    CNode *next = nullptr;
    bool free = true;

public:
    CNode() = default;

    ~CNode() = default;

    explicit CNode(Node *node);

    Node *getNode() const;

    void setNode(Node *node);

    CNode *getNext() const;

    void setNext(CNode *next);

    bool isFree() const;

    void setFree(bool free);
};


#endif //HELLOWORLD_CNODE_H
