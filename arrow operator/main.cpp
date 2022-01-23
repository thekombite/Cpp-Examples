#include <iostream>
#include <string>
using namespace std;

class Entity
{
public:
    void Print() const { cout << "Hello" << endl;}
};

int main()
{
    Entity e;
    e.Print();
    Entity* ptr = &e;

    ptr->Print();

    return 0;
}