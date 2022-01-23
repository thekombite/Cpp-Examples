#include <iostream>

using namespace std;

int main(){
string str = "A string";
char* ptr;

cout << str[0];
cout << "\n" << &ptr;
ptr = &str[3];
cout << "\n" << *ptr;
ptr = ptr + 2;
cout << "\n" << ptr << "\n" << str[4] << "\n" << str[7];

return 0;
}