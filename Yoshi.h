//
// Created by Yanis on 31/01/2023.
//

#ifndef TEST_HERRITAGE_YOSHI_H
#define TEST_HERRITAGE_YOSHI_H

#include "Character.h"

class Yoshi: public Character {
public:
    Yoshi();
    Yoshi(float speed, float max_speed);
    ~Yoshi() = default;

    std::string WhatAmI() const override;
};


#endif //TEST_HERRITAGE_YOSHI_H
