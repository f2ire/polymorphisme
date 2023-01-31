#include <iostream>
#include "test_character.h"
#include <vector>
#include <numeric>

//The question 2): Compile return an error because we can not create an object of type Character
//                  because it's an abstract class because we made WhatAmI() pure virtual with "= 0".
//                  We need to make a class that inherit from Character and implement WhatAmI() to make it work.
// No leaks of memory checked on Valgrind  "All heap blocks were freed -- no leaks are possible".
// 10 allocs and 100 frees --> OK!
// All other explations are given in comments in the code.


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
    std::cout << "____________________" << std::endl << std::endl;
    std::cout << "To end all test, we make the run asked in the question 3)" << std::endl;
    auto y = Yoshi(3);
    auto m = Mario();
    std::vector<Character *> c = {&y, &m};
    std::vector<int> v(6);
    std::iota(v.begin(), v.end(), 1);
    std::cout << "Character | Speed | Time" << std::endl;
    for (auto ti = v.begin(); ti != v.end(); ++ti) {//Using of iterator
        for (auto &j: c) { //Using of range based for loop
            j->Accelerate();
            std::cout << j->WhatAmI() << "|" << j->speed() << "|"
                      << *ti << std::endl;
        }
    } //We see that yoshi is faster, he reaches 10 faster than mario
    return 0;
}


