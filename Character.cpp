//
// Created by Yanis on 31/01/2023.
//

#include "Character.h"
#include <string>

Character::Character() : speed_(0), max_speed_(10) {}

Character::Character(float speed, float max_speed) : speed_(speed), max_speed_(max_speed) {}

void Character::Accelerate() {
    if (speed_ < max_speed_) {
        speed_ += 1;
    }
}

void Character::Break() {
    if (speed_ > 0) {
        speed_ -= 1;
    }
}