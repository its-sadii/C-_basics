#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public: 
    // properties , attributes
    string name;
    string dept;
    string subject;
   
    // Methods
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    void setSalary(double s){
        salary = s;
    }

    // getter 
    double getSalary() {
        return salary;
    }

};

int main(){
   Teacher t1;
   t1.name = "Shradha";
   t1.dept = "C++";
   t1.subject = "Computer Science ";
   t1.setSalary(500000);
   cout << t1.name << endl;
   cout << t1.getSalary() << endl;
    return 0;
}
