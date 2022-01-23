#include <iostream>
#include <string>
using namespace std;

class Entity
{
public:
    int x, y;

    Entity(int x , int y)
    {
        this->x = x;
        this->y = y;

    }

    int GetX() const
    {
        return this->x;
    }

};


int main()
{


    return 0;
}