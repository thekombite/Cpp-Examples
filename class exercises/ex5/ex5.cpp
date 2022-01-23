#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
protected:
	string name;
	int age;
public:
	virtual void getdata(){cin >> name >> age;}

	virtual void putdata(){cout << name << " " << age << " " << endl;}
	Person(string Name, int Age){
		name = Name;
		age = Age;
	}
};

int prof_id_cnt = 1;

class Professor:public Person{
private:
	int cur_id;
	int publications;
public:
	void getdata()
	{
		cin >> name >> age >> publications;
	}

	void putdata()
	{
		cout << name << " " << age << " " << publications << " " << cur_id << endl;
	}

	Professor():Person(name = "test", age = 0){
	cur_id = prof_id_cnt;
	prof_id_cnt++;
	}
};

int stud_id_cnt = 1;

class Student:public Person{
private:
	int cur_id;
	vector<int> marks;
public:
	void getdata(){
		int mark;
		cin >> name >> age;
		for (int i = 0; i < 6; i++)
		{
		cin >> mark;
		marks.push_back(mark);
		}
	}

	void putdata(){
		int total = 0;
		for (int i = 0; i < 6; i++)
		{
			total = total + marks[i];
		}
		cout << name << " " << age << " " << total << " " << cur_id << endl;
		marks.clear();
	}

	Student():Person(name="test", age=0){
		cur_id = stud_id_cnt;
		stud_id_cnt++;
	}
};

int main(){
    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0; i < n; i++){
        cin >> val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else per[i] = new Student; // Else the current object is of type Student
        per[i]->getdata(); // Get the data from the user.
		val = 0;
	}
    for(int i=0; i < n ;i++)
        per[i]->putdata(); // Print the required output for each object.
	return 0;
}
