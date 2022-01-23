#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int getCount(const string& inputStr){
   string x = inputStr;
   int len = x.length();
   transform(x.begin(), x.end(), x.begin(), ::tolower);
   int num_vowels = 0;
   string arr = "aeiou";
   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < len; j++)
      {
         if (arr[i] == x[j])
         {
            num_vowels++;
         }
         
      }
      
   }
   

  return num_vowels;
}
int main()
{
   string str = "abracadabra";
   cout << getCount(str);
   

   return 0;
}