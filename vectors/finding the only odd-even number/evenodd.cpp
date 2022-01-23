#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int FindOutlier(std::vector<int> arr)
{
   int sz = arr.size();
   if (sz < 3)
   {
      return -1;
   }
   vector<int> even;
   vector<int> odd;
   int result;
   for (int i = 0; i < sz; i++)
   {
      if (arr[i] % 2 == 0)
      {
         even.push_back(arr[i]);
      }
      if (arr[i] % 2 != 0)
      {
         odd.push_back(arr[i]);
      }
   }
   if (even.size() == 1)
   {
      result = even[0];
   }
   if (odd.size() == 1)
   {
      result = odd[0];
   }
   
   
   return result;
}
int main()
{
   vector<int> myvec;
   myvec.push_back(2);
   myvec.push_back(3);
   myvec.push_back(4);
   myvec.push_back(6);
   myvec.push_back(8);
   myvec.push_back(12);
   myvec.push_back(14);
   myvec.push_back(16);
   cout << FindOutlier(myvec);
   return 0;
}