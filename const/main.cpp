#include <iostream>
#include <string>
using namespace std;

class Entity
{
private:
    int m_X, m_Y;
    mutable var; // Mutable variables can be modified inside a const function
public:
    int GetX() const // Promises for not changing any variables inside this function
    {
        var = 2;
        return m_X;
    }

    void SetX(int x) // If we add const in this funciton we can't change the value of the m_X. That's why we aren't adding const here.
    {
        m_X = x;
    }
};

void PrintEntity(const Entity& e)
{
    cout << e.GetX() << endl;  
}

int main() 
{
    const int MAX_AGE = 90;
    int* const a = new int; // If const keyword is after the "*" we can change the content of the pointer(*a = 2).
                            // But If const keyword is before the "*" we can't change the content of the pointer but now we can resign
                            // actual pointer(a = nullptr or a = (int*)&MAX_AGE).
    *a = 2;
    
    cout << *a << endl;

    delete a;
    return 0;
}