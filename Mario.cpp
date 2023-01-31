//
// Created by Yanis on 31/01/2023.
//

#include "Mario.h"

Mario::Mario() : Character() {}

Mario::Mario(float speed, float max_speed) : Character(speed, max_speed) {}

std::string Mario::WhatAmI() const {
    return "Mario";
}