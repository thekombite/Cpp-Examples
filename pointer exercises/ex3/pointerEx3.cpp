#include <iostream>

using namespace std;

void disp(int* ptr){
    cout << *ptr;
}



int main(){
int* ptr;
int a;
cin >> a;
ptr = &a;
disp(ptr);
return 0;
}