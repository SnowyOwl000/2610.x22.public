//
// Created by bob on 8/16/22.
//

#ifndef _DIE_H
#define _DIE_H

#include <cstdint>
#include <random>

class Die {
public:
    explicit Die(int32_t _nFaces=6);
    ~Die();

    int32_t roll();
    int32_t look() const;
private:
    int32_t
        nFaces,                 // number of faces
        top;                    // top face
    std::random_device
        *rd;                    // for random number generation
    std::mt19937
        *mt;
    std::uniform_int_distribution<>
        *dis;
};

#endif //_DIE_H
