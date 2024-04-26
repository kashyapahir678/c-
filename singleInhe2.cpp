#include <iostream>

using namespace std;

class Manager{
    int salary = 50000;

    public:

    char name[50];
    

    void printData(){
        cout << "Employee Salary is : " << salary << endl;
    }

};

class Employee : public Manager{

    public:
    int bonus = 3000;

};

int main(){

    Employee obj;

    cin >> obj.name;
    cout << "Empoyee Name is : " << obj.name << endl;
    obj.printData();
    cout << "Empoyee Bonus is : " << obj.bonus;
    

    return 0;
}