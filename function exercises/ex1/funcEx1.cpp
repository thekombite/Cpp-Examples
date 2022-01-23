#include <iostream>

using namespace std;

void func(int a, int b){
int result = 1;
for (int i = 0; i < b; i++)
{   
    result = a * result;
}
cout << result; 
}


int main(){

func(6, 5);


return 0;
}