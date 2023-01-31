//
// Created by Yanis on 31/01/2023.
//

#include "Yoshi.h"

Yoshi::Yoshi() : Character(){
    int* c(new int(0));
    number_of_crests_ = c;
}

Yoshi::~Yoshi() {
    delete number_of_crests_;
}

Yoshi::Yoshi(int number_of_crests):
        Character() {
    int* c(new int(number_of_crests));
    number_of_crests_ = c;
}

Yoshi::Yoshi(float speed, float max_speed, int number_of_crests) :
        Character(speed, max_speed) {
    int* c(new int(number_of_crests));
    number_of_crests_ = c;
}

std::string Yoshi::WhatAmI() const {
    return (std::to_string(*number_of_crests_) + " crested Yoshi");
}

void Yoshi::Accelerate() {
    Character::Accelerate();
    Character::Accelerate();
}
