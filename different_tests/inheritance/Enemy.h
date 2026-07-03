#ifndef EXERCISE_H
#define EXERCISE_H

class Enemy 
{
    private:
        std::string name_;
        int lives_;
        int damage_;
    public:
        Enemy(std::string name, int lives, int damage);
        Enemy(std::string name);
        ~Enemy();
        std::string GetName() const;
        void Display() const;
        void Attack() const;
}


#endif // _EXERCISE_H














