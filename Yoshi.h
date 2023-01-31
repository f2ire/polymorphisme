//
// Created by Yanis on 31/01/2023.
//

#ifndef TEST_HERRITAGE_YOSHI_H
#define TEST_HERRITAGE_YOSHI_H

#include "Character.h"

class Yoshi: public Character {
public:
    Yoshi();
    Yoshi(int number_of_crests);
    Yoshi(float speed, float max_speed, int number_of_crests);
    ~Yoshi() = default;
    void Accelerate() override;
    std::string WhatAmI() const override;
private:
    int number_of_crests_;
};


#endif //TEST_HERRITAGE_YOSHI_H
