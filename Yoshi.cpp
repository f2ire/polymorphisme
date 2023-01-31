//
// Created by Yanis on 31/01/2023.
//

#include "Yoshi.h"

Yoshi::Yoshi(): Character() {}

Yoshi::Yoshi(float speed, float max_speed) : Character(speed, max_speed) {}

std::string Yoshi::WhatAmI() const {
    return "Yoshi";
}