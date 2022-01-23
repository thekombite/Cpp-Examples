#include <iostream>
#include <string>

struct Entity
{
    static int x, y;  

    static void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

int Entity::x;
int Entity::y;

int main()
{
    Entity::x = 3;
    Entity::y = 6;
    Entity::Print();
    return 0;
}