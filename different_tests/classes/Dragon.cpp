#include <iostream>
#include "Dragon.h"


Dragon::Dragon(std::string name) : 
        name_(name)
{
    health_ = 100;
    power_ = 10;
}

Dragon::Dragon(std::string name, int health, int power) : 
    name_(name), health_(health), power_(power)
{}

Dragon::~Dragon(){}

std::string Dragon::GetName() const 
{
    return name_;
}

void Dragon::Display() const 
{
    std::cout << "Name: " << name_ << " Health: " << health_ << "Power: " << power_ << "\n";
}

void Dragon::Attack(Dragon& targetDragon) 
{
    targetDragon.health_ -= power_;
    std::cout << name_ << " attacks " << targetDragon.GetName() << "!\n";
}

void Dragon::Heal(int amount)
{
    health_ += amount;
    if(health_ > 100) 
    {
        health_ = 100;
    }
}


void Dragon::Greet(const Dragon& dragon) const
{
    std::cout << name_ << " greets " << dragon.GetName() << "!\n";
}

