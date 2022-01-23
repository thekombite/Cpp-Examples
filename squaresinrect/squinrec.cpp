#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;
class SqInRect
{
  public:
  static vector<int> sqInRect(int D, int S)
  {
    if(D == S) return {}; 
    vector<int> toReturn;    
    
    while(D > 0 && S > 0)
        D >= S ? (toReturn.push_back(S), D -= S) : (toReturn.push_back(D), S -= D);
        
    return toReturn;
  }
};
int main()
{
   SqInRect rec;
   vector<int> mvec;
   mvec = rec.sqInRect(7, 5);
   for (int i = 0; i < mvec.size(); i++)
   {
      cout << mvec[i] << ",";
   }
   
   return 0;
}
 


