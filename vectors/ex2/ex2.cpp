// you can use includes, for example:
// #include <algorithm>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
   for (int i = 0; i < A.size(); i++)
   {
      if (A[i] < 0)
      {
         A[i] = A[i] * -1;
         int minn = *min_element(A.begin(), A.end());
      if (i == A.size() - 1)
      {
         return minn;
      }
      
      }

   }
   int min = *min_element(A.begin(), A.end()); 
   for (int i = 0; i < A.size(); i++)
   {
      if (min + 1 == A[i] && min != A[i])
      {
         min = A[i];
         
      }
   }
   return min + 1;
}
int main(){

int size;
vector<int> myvec;
std::cin >> size;

int *array = new int[size];

for (int k = 0; k < size; k++)
{
   cin >> array[k];
}
for (int i = 0; i < size; i++)
{
   /*if (array[i] < 0)
   {
      array[i] = array[i] * -1;
   }*/
   myvec.push_back(array[i]);
}
cout << solution(myvec);
   return 0;
}