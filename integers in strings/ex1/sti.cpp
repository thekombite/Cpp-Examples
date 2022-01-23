#include <stdlib.h>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct numeric_only: std::ctype<char> 
{
    numeric_only(): std::ctype<char>(get_table()) {}

    static std::ctype_base::mask const* get_table()
    {
        static std::vector<std::ctype_base::mask> 
            rc(std::ctype<char>::table_size,std::ctype_base::space);

        std::fill(&rc['0'], &rc[':'], std::ctype_base::digit);
        return &rc[0];
    }
};

int main(){

int num;
        std::cin.imbue(std::locale(std::locale(), new numeric_only()));
        while ( std::cin >> num)
             std::cout << num << std::endl;
        return 0;
}