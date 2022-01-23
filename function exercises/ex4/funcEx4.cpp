#include <iostream>

using namespace std;

void sum(int n){
int result = 0;

for (int i = 0; i <= n; i++)
{
    result = result + i;
}

cout << "\n" <<result;
}

int main(){
int n;
cout << "enter num: ";
cin >> n;
sum(n);
return 0;
}