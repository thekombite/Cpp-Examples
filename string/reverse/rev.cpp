#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;
void reversed(string& s, int l, int r)
{
  
    while (l < r) {
  
        // Swap characters at l and r
        swap(s[l], s[r]);
        l++;
        r--;
    }
}
  
// Function to reverse the given string
string reverseString(string str)
{
    // Add space at the end so that the
    // last word is also reversed
    str.insert(str.end(), ' ');
  
    int n = str.length();
  
    int j = 0;
  
    // Find spaces and reverse all words
    // before that
    for (int i = 0; i < n; i++) {
  
        // If a space is encountered
        if (str[i] == ' ') {
  
            // Function call to our custom
            // reverse function()
            reversed(str, j, i - 1);
  
            // Update the starting index
            // for next word to reverse
            j = i + 1;
        }
    }
  
    // Remove spaces from the end of the
    // word that we appended
    str.pop_back();
  
    // Reverse the whole string
    reversed(str, 0, str.length() - 1);
  
    // Return the reversed string
    return str;
}

string reverse_words(string str)
{
 int len = str.length();
  if (len == 0)
   {
      return "";
   }
  string rev;
    for (int i = str.size() - 1; i >= 0; i--) {
        rev = rev.append(1, str[i]);
    };
 
    return reverseString(rev);
}




int main()
{
   cout << reverse_words("ferit gzl gzl ferit");
   return 0;
}