//
// Created by José Acuña on 08/03/2019.
//

#include "Collector.h"


void Collector::add(Node *node) {
    CNode *tmp = list.getHead();

    if (tmp == nullptr) list.add(node); // If the CList is empty
    else {
        while (tmp->getNext()) {
            if (tmp->isFree()) { // Checks for the first free memory location
                tmp->setNode(node);
                break;
            }
            else { // Creates a new CNode in the Collector
                list.add(node);
            }
        }
    }
}

void Collector::remove(int index) {
    list.remove(index);
}
