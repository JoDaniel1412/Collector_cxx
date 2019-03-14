//
// Created by José Acuña on 08/03/2019.
//

#ifndef HELLOWORLD_COLLECTOR_H
#define HELLOWORLD_COLLECTOR_H

#include "clist/CList.h"
#include "../list/node/Node.h"

class Collector {

private:
    static Collector *instance = nullptr;
    CList list;

public:
    ~Collector() = default;

    Node * add(int value);

    void removeN(Node * node);

    Collector * getInstance();

};


#endif //HELLOWORLD_COLLECTOR_H
