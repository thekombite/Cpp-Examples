#include <iostream>
using namespace std;


int main(){
int arr[10], n;
cout << "Enter 10 integers with space separated: ";
for (int i = 0; i < 10; i++)
{
  cin >> arr[i];
}
for (int i = 0; i < 10; i++)
{
  cout << arr[i] << " ";
}
cout << "\nEnter a number that you want to search in this array: ";
cin >> n;
int cnt = 0;
for (int i = 0; i < 10; i++)
{
  if(n == arr[i])
    cnt++;
}
cout << "\nEntered number founded " << cnt <<" times" ;
return 0;
}
