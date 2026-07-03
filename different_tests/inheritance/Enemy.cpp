#include "Enemy.h"

#include <iostream>

Enemy::Enemy(std::string name, int live, int damage) : 
        name_(name), live_(live), damage_(damage)
{}

Enemy::Enemy(std::string name) : 
        name_(name)
{
    live_ = 10;
    damage_ = 3;
}

std::string Enemy::GetName() const 
{
    return name_;
}

void Display() const
{
    std::cout << "Enemy: " << name_ << ", Lives: " << lives_ << ", Damage: " << damage_ <<"\n";
}

void Attack(Enemy& target) const
{
    std::cout << name_ <<" attacks " << target.GetName() << "!\n";
}
