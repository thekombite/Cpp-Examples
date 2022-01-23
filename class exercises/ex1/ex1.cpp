#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void askForPromotion() = 0;
};
class Employee:AbstractEmployee
{
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    void setName(string name)
    {
        Name = name;
    } 
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    } 
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void IntroduceYourSelf()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void askForPromotion(){
        if(Age>30)
            cout << Name << " Got promoted!" << endl;
        else
            cout << Name << " Nope! no promotion for you." << endl;
    }

    virtual void Work(){
        cout << Name << " is checking e-mail, task backlog, performing tasks.. " << endl;
    }
};
class Developer:public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favprogramminglanguage):Employee(name, company, age){
        FavProgrammingLanguage = favprogramminglanguage;
    }
    void FixBug(){
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
    void Work(){
        cout << Name << " is writing " << FavProgrammingLanguage << " code" << endl;
    }
};
class Teacher:public Employee {
public:
    string Subject;
    void PrepareLesson(){
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    } 

    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        Subject = subject;
    }

    void Work(){
            cout << Name << " is teaching " << Subject << endl;
        }
};
int main()
{
    Developer d = Developer("domdom", "kurşun", 33, "python");
    Teacher t = Teacher("www.", "bombabomba.com", 31, "math");
    
    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->Work();
    e2->Work();
}
