#include <iostream>
using namespace std;

class complex{
int real;
int imag;

public:
complex(int r, int i){real = r; imag = i;}

void print(){
  cout << real << " + " << imag << "i" << endl;
}
friend complex operator + (complex const &, complex const &);
};

complex operator + (complex const &c1, complex const &c2)
{
     return complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main(){
int a, b, c, d;
cout << "enter first complex number(a+bi = a b): ";
cin >> a >> b;
cout << "enter second complex number(a+bi = a b): ";
cin >> c >> d;
complex c1(a, b);
complex c2(c, d);
complex c3 = c1 + c2;
c3.print();
return 0;
}
