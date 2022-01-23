#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;

class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window);
};

Bouncingball::bouncingBall(double h, double bounce, double window){
   if (h <= 0 || bounce >= 1 || bounce <= 0 || window >= h )
   {
      return -1;
   }
   int bounce_counter = 1;
   while (h > window)
   {
      if (h * bounce > window)
      {
         h = h * bounce;
         bounce_counter = bounce_counter + 2;
      }   
      else 
         break;
   }
   return bounce_counter;
}



int main()
{
   Bouncingball b;
   cout << b.bouncingBall(30, 0.66, 1.5);
   return 0;
}