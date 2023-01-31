//
// Created by Yanis on 31/01/2023.
//

#include "test_character.h"


void test_default_constructor() {
    Character c = Character();
    std::cout << (c.speed() == 0 ? "True" : "False")  << std::endl;
}

void test_constructor() {
    Character c = Character(5, 10);
    std::cout << (c.speed() == 5 ? "True" : "False")  << std::endl;
}

void test_accelerate() {
    Character c = Character(9,10);
    c.Accelerate();
    std::cout << (c.speed() == 10 ? "True" : "False")  << std::endl;
    c.Accelerate();
    std::cout << (c.speed() == 10 ? "True" : "False")  << std::endl;
}

void test_break() {
    Character c = Character(5,10);
    c.Break();
    std::cout << (c.speed() == 4 ? "True" : "False")  << std::endl;
    Character c2 = Character();
    c2.Break();
    std::cout << (c2.speed() == 0 ? "True" : "False")  << std::endl;
}

void test_speed() {
    Character c = Character(5, 10);
    std::cout << (c.speed() == 5 ? "True" : "False")  << std::endl;
}