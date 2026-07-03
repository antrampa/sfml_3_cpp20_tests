#include "Enemy.h"
#include "Boss.h"

#include <iostream>

Boss::Boss(std::string name, int lives, int damage, int potions) : 
        Enemy(name, lives, damage), potions_(potions)
{}

Boss::Boss(std::string name) :
        Enemy(name)
{
    lives_ = 15;
    damage_ = 5;
    potions_ = 3;
}

Boss::~Boss() {}

void Boss::SpecialAttack(Enemy& target)
{
    if(potions_ > 0)
    {
        Enemy::Attack(target);
        std::cout << "The enemy is immobilized!\n";
        potions_ -= 1;
    }
    else 
    {
        std::cout << name_ << " has no potions left!\n";
    }
}

void Boss::Display() const
{
    Enemy::Display();
    std::cout << "Potions: " << potions_ << "\n";
}
