//
// Created by Yanis on 31/01/2023.
//

#ifndef POLYMORPHISM_CHARACTER_H
#define POLYMORPHISM_CHARACTER_H

#include <string>

class Character {
public:
    Character();
    Character(float speed, float max_speed);
    ~Character() = default;
    virtual std::string WhatAmI() const = 0; // Pure virtual function. This class is now abstract. We can't instantiate it anymore.

    void Accelerate();
    void Break();
    inline float speed() const { return speed_; }
private:
    float speed_;
    float max_speed_;
};


#endif //POLYMORPHISM_CHARACTER_H
