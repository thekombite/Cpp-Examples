#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;
bool isValidWalk(std::vector<char> walk) {
  int size = walk.size();
  int arr [2] = {0, 0};
  if (size == 10)
  {
      for (int i = 0; i < size; i++)
      {
         if (walk[i] == 'n')
         {
            arr[1] = arr[1] + 1;
         }
         if (walk[i] == 's')
         {
            arr[1] = arr[1] - 1;
         }
         if (walk[i] == 'w')
         {
            arr[0] = arr[0] - 1;
         }
         if (walk[i] == 'e')
         {
            arr[0] = arr[0] + 1;
         }
      }
      if (arr[0] == 0 && arr[1] == 0)
      {
         cout << "for true---> " << arr[0] << " " << arr[1] << endl;
         return true;
      }
  }
  cout << "for false---> " << arr[0] << " " << arr[1] << endl;
  return false;
}

int main()
{
   vector<char> walk;
   walk = {'n','s','n','s','n','s','n','s','n','s'};         //1
   cout << "1: " << isValidWalk(walk) << endl;
   walk = {'n','s','e','w','n','s','e','w','n','s'};         //1
   cout << "2: " << isValidWalk(walk) << endl;
   walk = {'s','e','w','n','n','s','e','w','n','s'};         //1
   cout << "3: " << isValidWalk(walk) << endl;
   walk = {'n','s','n','s','n','s','n','s','n','n'};         //0
   cout << "4: " << isValidWalk(walk) << endl;
   walk = {'e','e','e','w','n','s','n','s','e','w'};         //0
   cout << "5: " << isValidWalk(walk) << endl;
   walk = {'n'};                                             //0
   cout << "6: " << isValidWalk(walk) << endl;
   walk = {'n', 's'};                                        //0
   cout << "7: " << isValidWalk(walk) << endl;
   walk = {'n','s','n','s','n','s','n','s','n','s','n','s'}; //0
   cout << "8: " << isValidWalk(walk) << endl;
    
   return 0;
}
 


