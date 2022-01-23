#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int findOdd(const std::vector<int>& numbers){
  //your code here  

  
  return 1;
}

int main(){
  vector<int> a;
  a.push_back(2);
  a.push_back(2);
  a.push_back(2);
  a.push_back(3);
  a.push_back(5);
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " " << endl;
  }
  cout << count(a.begin(), a.end(), 2);
  cout << findOdd(a);

  return 0;
}