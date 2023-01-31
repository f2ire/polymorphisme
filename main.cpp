#include <iostream>
#include "Character.h"
#include "test_character.h"

int main() {
    std::cout << std::endl << "All test for the Character class" << std::endl;
    std::cout << "If print only True, that mean all test work as wanted" << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of default constructor : " << std::endl;
    test_default_constructor();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of constructor : " << std::endl;
    test_constructor();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of accelerate : " << std::endl;
    test_accelerate();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of break : " << std::endl;
    test_break();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of WhatAmI: " << std::endl;
    test_whatAmI();
    std::cout << "____________________" << std::endl;
    return 0;
}
