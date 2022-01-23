#include <iostream>

using namespace std;



int main(){
int a, b;
int* ptrA = &a;
int* ptrB = &b;
cout << "enter integers: ";
cin >> a >> b;
cout << "first number: " << a << endl;
cout << "second number: " << b << endl;
cout << "pointer of first number: " << *ptrA << endl;
cout << "pointer of second number: " << *ptrB << endl;
cout << "address of first number: " << ptrA << endl;
cout << "address of second number: " << ptrB << endl;

return 0;
}