#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> parseInts(string str) {
// integers from user separated with commas.
stringstream ss(str);
vector<int> asd;
char com;
int n;

while (ss >> n){
  asd.push_back(n);
  ss >> com;
}
return asd;
                                                                // For 3 integer separated with commas.
                                                                /*
                                                                int a, b, c;
                                                                ss >> a >> com >> b >> com >> c;
                                                                asd.push_back(a);
                                                                asd.push_back(b);
                                                                asd.push_back(c);
                                                                */

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}