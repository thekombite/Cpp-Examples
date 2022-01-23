#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int Q, choice, num;
    set<int> s;
    cin >> Q;
    while (Q--)
    {
       cin >> choice >> num;
       if (choice == 1)
       {
          s.insert(num);
       }
       if (choice == 2)
       {
          s.erase(num);
       }
       if (choice == 3)
       {
          set<int>::iterator itr=s.find(num);
          if (itr == s.end())
          {
             cout << "No\n";
          }
          else
          {
             cout << "Yes\n";
          }
       }
    }
    


    return 0;
}



