//
// Created by Yanis on 31/01/2023.
//

#include "test_character.h"
#include <iostream>
#include <intrin.h>
#include <string>

void test_default_constructor() { //Its also test speed()
    Yoshi y = Yoshi();
    Mario m = Mario();
    std::cout << (y.speed() == 0 ? "True" : "False")  << std::endl;
    std::cout << (m.speed() == 0 ? "True" : "False")  << std::endl;
}

void test_constructor() {
    Yoshi y = Yoshi(5,10);
    Mario m = Mario(5,10);
    std::cout << (y.speed() == 5 ? "True" : "False")  << std::endl;
    std::cout << (m.speed() == 5 ? "True" : "False")  << std::endl;
}

void test_accelerate() {
    Yoshi y = Yoshi(9,10);
    Mario m = Mario(9,10);
    y.Accelerate();
    m.Accelerate();
    std::cout << (m.speed() == 10 ? "True" : "False")  << std::endl;
    std::cout << (y.speed() == 10 ? "True" : "False")  << std::endl;
    m.Accelerate();
    y.Accelerate();
    std::cout << (m.speed() == 10 ? "True" : "False")  << std::endl;
    std::cout << (y.speed() == 10 ? "True" : "False")  << std::endl;
}

void test_break() {
    Yoshi y = Yoshi(1,10);
    Mario m = Mario(1,10);
    y.Break();
    m.Break();
    std::cout << (m.speed() == 0 ? "True" : "False")  << std::endl;
    std::cout << (y.speed() == 0 ? "True" : "False")  << std::endl;
    y.Break();
    m.Break();
    std::cout << (m.speed() == 0 ? "True" : "False")  << std::endl;
    std::cout << (y.speed() == 0 ? "True" : "False")  << std::endl;
}

void test_whatAmI() {
    Yoshi y = Yoshi();
    Mario m = Mario();
    std::cout << ((y.WhatAmI() == "Yoshi") ? "True" : "False")  << std::endl;
    std::cout << ((m.WhatAmI() == "Mario") ? "True" : "False")  << std::endl;
}