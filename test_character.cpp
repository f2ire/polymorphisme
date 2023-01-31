//
// Created by Yanis on 31/01/2023.
//

#include "test_character.h"
#include <iostream>
#include <string>
#include <vector>

void test_default_constructor() { //Its also test speed()
    auto y = Yoshi();
    auto m = Mario();
    std::cout << (y.speed() == 0 ? "True" : "False")  << std::endl;
    std::cout << (m.speed() == 0 ? "True" : "False")  << std::endl;
}

void test_constructor() {
    auto y = Yoshi(5,10,5);
    auto m = Mario(5,10);
    std::cout << (y.speed() == 5 ? "True" : "False")  << std::endl;
    std::cout << (m.speed() == 5 ? "True" : "False")  << std::endl;
}

void test_accelerate() {
    auto y = Yoshi();
    auto adv = 5.0; //Start to 5 for both reach the max speed
    auto m = Mario(adv,10); //We give advance to mario to make easier the test and more interesting
    Character* c[2] = {&y, &m};
    for (int i = 0; i < 6; ++i) {
        c[0]->Accelerate();
        c[1]->Accelerate();
        std::cout << ((c[0]->speed() == std::min((i+1)*2.0,10.0)) ? "True" : "False") << std::endl;
        std::cout << ((c[1]->speed() == std::min((i+1)+adv,10.0)) ? "True" : "False") << std::endl;
    } //We see that yoshi is faster than mario because he is starting at 0 and mario at 5
}

void test_break() {
    auto y = Yoshi(1,10,5);
    auto m = Mario(1,10);
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
    auto y = Yoshi(6);
    auto m = Mario();
    std::cout << ((y.WhatAmI() == "6 crested Yoshi") ? "True" : "False")  << std::endl;
    std::cout << ((m.WhatAmI() == "Mario") ? "True" : "False")  << std::endl;
}