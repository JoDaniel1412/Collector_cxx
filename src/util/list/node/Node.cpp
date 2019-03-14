//
// Created by José Acuña on 08/03/2019.
//

#include "Node.h"

Node::Node(int value) : value(value) {}

void *Node::operator new(size_t size) {
    void *tmp = ::new Node();

    Node *node = (Node *) tmp;
    collector->add(node->getValue());
    return tmp;
}

void *Node::operator delete(void *n) {
    auto *node = (CNode *) n;
    collector->removeN(node);
    free(n);
}

int Node::getValue() const {
    return value;
}

void Node::setValue(int value) {
    Node::value = value;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

Node *Node::getPrev() const {
    return prev;
}

void Node::setPrev(Node *prev) {
    Node::prev = prev;
}
