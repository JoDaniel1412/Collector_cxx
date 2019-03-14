//
// Created by José Acuña on 12/03/2019.
//

#include "CNode.h"

CNode::CNode(Node *node) {
    this->node = node;
    free = false;
}

CNode::CNode(int value) {
    Node *node = (Node *)(malloc(sizeof(Node)));
    node->setValue(value);

    this->node = node;
    free = false;
};


Node *CNode::getNode(){
    return node;
}

void CNode::setNode(Node *node) {
    CNode::node = node;
}

CNode *CNode::getNext() const {
    return next;
}

void CNode::setNext(CNode *next) {
    CNode::next = next;
}

bool CNode::isFree() const {
    return free;
}

void CNode::setFree(bool free) {
    CNode::free = free;
}