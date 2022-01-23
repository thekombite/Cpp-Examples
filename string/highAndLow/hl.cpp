#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;
 
std::string highAndLow(const std::string& numbers){
std::string segment;
std::vector<std::string> seglist;
vector<int> intlist;
stringstream ss(numbers);
int temp, max, min;
while(ss >> segment)
{
   seglist.push_back(segment); 
}
for (int i = 0; i < seglist.size(); i++)
{
   temp = stoi(seglist[i]);
   intlist.push_back(temp);
}
min = *min_element(intlist.begin(), intlist.end());
max = *max_element(intlist.begin(), intlist.end());
return to_string(max) + " " + to_string(min);
}

int main()
{
string numbers = "0 12 312 -3 213 123 12 14 1341 33 23125 135 2 -45123 1 -252 -534 -13 4 -235 2";
cout << highAndLow(numbers);
return 0;
}