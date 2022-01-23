// https://www.youtube.com/watch?v=ts1Eek5w7ZA&ab_channel=TheCherno
#include <iostream>
#include <string>
#include <algorithm>


namespace apple{
    void print(const char* text)
    {
        std::cout << text << std::endl;
    }

}

namespace orange{
    void print(const char* text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }

}

// using namespace orange || using namespace a = apple
// using namespace apple || using namespace o = orange

int main()
{
    orange::print("Hello");
    apple::print("Hello");

    return 0;
}