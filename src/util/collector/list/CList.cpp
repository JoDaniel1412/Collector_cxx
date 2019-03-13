//
// Created by José Acuña on 12/03/2019.
//

#include "CList.h"
#include "node/CNode.h"

void CList::add(Node *node) {
    auto *tmp = new CNode(node);

    if (head == nullptr) head = tail = tmp;
    else {
        tail->setNext(tmp);
        tail = tmp;
    }
}

void CList::remove(int index) {
    CNode *node = head;

    for (int i = 0; i < index; i++) {
        node = node->getNext();
    }

    node->setFree(true);
}

CNode *CList::getHead() const {
    return head;
}

CNode *CList::getTail() const {
    return tail;
}
