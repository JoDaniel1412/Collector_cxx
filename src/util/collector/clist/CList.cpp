//
// Created by José Acuña on 12/03/2019.
//

#include "CList.h"
#include "cnode/CNode.h"

CNode * CList::add(int value) {
    auto *tmp = new CNode(value);

    if (head == nullptr) head = tail = tmp;
    else {
        tail->setNext(tmp);
        tail = tmp;
    }
    return tmp;
}

void CList::remove(Node *n) {
    CNode *node = head;

    while (node->getNext()) {
        if (node->getNode() == n) {
            node->setFree(true);
            break;
        }
    }
}

CNode *CList::getHead() const {
    return head;
}

CNode *CList::getTail() const {
    return tail;
}
