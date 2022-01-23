#include <iostream>
#include <string>
using namespace std;
void rev_string(string str){
	string arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = str[5 - i - 1];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}
	
}
int main(){
string f = "murat";
rev_string(f);




return 0;
}