//
// Created by José Acuña on 08/03/2019.
//

#include "Collector.h"


Node * Collector::add(int value) {
    CNode *tmp = list.getHead();

    if (tmp == nullptr) tmp = list.add(value); // If the CList is empty
    else {
        while (tmp->getNext()) {
            if (tmp->isFree()) { // Checks for the first free memory location
                tmp->getNode()->setValue(value);
                tmp->setFree(false);
                break;
            }
            else { // Creates a new CNode in the Collector
                tmp = list.add(value);
            }
        }
    }

    return tmp->getNode();
}

void Collector::removeN(Node * node) {
    list.remove(node);
}

Collector *Collector::getInstance() {
    return instance;
}
