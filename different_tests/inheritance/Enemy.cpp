#include "Enemy.h"

#include <iostream>

Enemy::Enemy(std::string name, int lives, int damage) : 
        name_(name), lives_(lives), damage_(damage)
{}

Enemy::Enemy(std::string name) : 
        name_(name)
{
    lives_ = 10;
    damage_ = 3;
}

Enemy::~Enemy()
{}

std::string Enemy::GetName() const 
{
    return name_;
}

void Enemy::Display() const
{
    std::cout << "Enemy: " << name_ << ", Lives: " << lives_ << ", Damage: " << damage_ <<"\n";
}

void Enemy::Attack(Enemy& target) const
{
    target.GetHit();
    std::cout << name_ <<" attacks " << target.GetName() << "!\n";
}

void Enemy::GetHit()
{
    lives_ -= 1;
}

