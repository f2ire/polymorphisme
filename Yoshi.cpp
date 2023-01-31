//
// Created by Yanis on 31/01/2023.
//

#include "Yoshi.h"

Yoshi::Yoshi() : Character(), number_of_crests_(5){}

Yoshi::Yoshi(int number_of_crests):
        Character(),
        number_of_crests_(number_of_crests) {}

Yoshi::Yoshi(float speed, float max_speed, int number_of_crests) :
        Character(speed, max_speed),
        number_of_crests_(number_of_crests) {}

std::string Yoshi::WhatAmI() const {
    return (std::to_string(number_of_crests_) + " crested Yoshi");
}

void Yoshi::Accelerate() {
    Character::Accelerate();
    Character::Accelerate();
}
