#include <iostream>

using namespace std;

void hello(string name){

    cout << "hello, " << name;
}


int main(){
string name;
cin >> name;
hello(name);



return 0;
}