//
// Created by Yanis on 31/01/2023.
//

#ifndef TEST_HERRITAGE_MARIO_H
#define TEST_HERRITAGE_MARIO_H

#include "Character.h"

class Mario: public Character {
public:
    Mario();
    Mario(float speed, float max_speed);
    ~Mario() = default;

    std::string WhatAmI() const final; //Same explanation that in Yoshi.h. Could be "override" too.
};


#endif //TEST_HERRITAGE_MARIO_H
