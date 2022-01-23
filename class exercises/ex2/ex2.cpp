#include <iostream>
#include <sstream>

using namespace std;

class Student{
protected:
    int age;
    string name;
    string lastname;
    int standard;
public:
    void set_first_name(string fname){name = fname;}
    string get_first_name(){return name;}
    void set_age(int Age){age = Age;}
    int get_age(){return age;}
    void set_last_name(string last_name){lastname = last_name;}
    string get_last_name(){return lastname;}
    void set_standard(int std){standard = std;}
    int get_standard(){return standard;}
    
    string to_string(){
          stringstream ss;
          ss << age << "," << name << "," << lastname << "," << standard;
          string a;
          ss >> a;
          return a;
      }
};



int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}