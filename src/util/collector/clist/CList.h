//
// Created by José Acuña on 12/03/2019.
//

#ifndef HELLOWORLD_CLIST_H
#define HELLOWORLD_CLIST_H

#include "cnode/CNode.h"

class CList {

private:
    CNode *head = nullptr;
    CNode *tail = nullptr;

public:
    CList() = default;

    ~CList() = default;

    void add(Node *node);

    void remove(int index);

    CNode *getHead() const;

    CNode *getTail() const;
};


#endif //HELLOWORLD_CLIST_H
