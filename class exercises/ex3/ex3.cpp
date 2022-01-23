#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
protected:
  int Score1;
  int Score2;
  int Score3;
  int Score4;
  int Score5;
public:
  int calculateTotalScore(){
    int total;
    total = Score1 + Score2 + Score3 + Score4 + Score5;
    return total;
  }

  void input(){
    cin >> Score1 >> Score2 >> Score3 >> Score4 >> Score5;
  }


};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
