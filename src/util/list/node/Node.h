//
// Created by José Acuña on 08/03/2019.
//

#ifndef HELLOWORLD_NODE_H
#define HELLOWORLD_NODE_H
#define NUll 0

#include <stdlib.h>
#include "../../collector/Collector.h"

class Node {

private:
    int value = NUll;
    Node *next = nullptr;
    Node *prev = nullptr;
    static Collector *collector = Collector::getInstance();

public:
    Node() = default;

    explicit Node(int value);

    ~Node() = default;

    int getValue() const;

    void setValue(int value);

    Node *getNext() const;

    void setNext(Node *next);

    Node *getPrev() const;

    void setPrev(Node *prev);

    void * operator new(size_t size);

    void * operator delete(void * n)

};


#endif //HELLOWORLD_NODE_H
