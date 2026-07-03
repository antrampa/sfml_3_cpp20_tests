#pragma once

class Dragon 
{
    private:
        std::string name_;
        int health_;
        int power_;
        
    public:
        Dragon(std::string name);
        Dragon(std::string name, int health, int power);
        ~Dragon();
        void GetName() const;
        void Display() const;
        void Attack(Dragon& dragon);
        void Heal(int amount);
        void Greet(const Dragon& dragon) const;
};
