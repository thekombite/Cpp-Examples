#include <iostream>
#include <string>
#include <memory>

class Entity{

public:
    Entity()
    {
        std::cout << "Created Entity!" << std:: endl;
    }

    ~Entity()
    {
        std:: cout << "Destroyed Entity!" << std::endl;
    }
};




int main()
{

    return 0;
}