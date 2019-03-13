//
// Created by José Acuña on 08/03/2019.
//

#ifndef HELLOWORLD_COLLECTOR_H
#define HELLOWORLD_COLLECTOR_H

#include "clist/CList.h"

class Collector {

private:
    CList list;

public:
    ~Collector() = default;

    void add(Node *node);

    void remove(int index);

};


#endif //HELLOWORLD_COLLECTOR_H
