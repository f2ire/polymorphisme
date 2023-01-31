//
// Created by Yanis on 31/01/2023.
//

#ifndef POLYMORPHISM_CHARACTER_H
#define POLYMORPHISM_CHARACTER_H



class Character {
public:
    Character();
    Character(float speed, float max_speed);
    ~Character() = default;

    void Accelerate();
    void Break();
    inline float speed() const { return speed_; }
private:
    float speed_;
    float max_speed_;
};


#endif //POLYMORPHISM_CHARACTER_H
