//
// Created by bob on 8/16/22.
//

#include "die.h"

Die::Die(int32_t _nFaces) {

    // set up nFaces
    nFaces = _nFaces;

    // set up random number generation
    rd = new std::random_device;

    mt = new std::mt19937((*rd)());

    dis = new std::uniform_int_distribution<>(1,nFaces);

    // generate initial random number
    top = (*dis)(*mt);
}

Die::~Die() {

    delete dis;

    delete mt;

    delete rd;
}

int32_t Die::roll() {

    // generate random number
    top = (*dis)(*mt);

    // return result
    return top;
}

int32_t Die::look() const { return top; }
