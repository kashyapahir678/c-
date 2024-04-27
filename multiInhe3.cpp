#include <iostream>

using namespace std;

class Manager{
    int salary=20000;

    public:

    void printData(){
        cout << "Salary is -" << salary << endl;
    }

};

class Customer : public Manager{
    public:

    int bonus=2000;

    void setData(){
        cin >> bonus;
    }
};

class derive : public Customer{
    public:
    int id=20;
    
    void setData(){
        cout << "id is -" << id << endl;
        printData();
        cout << "Bonus is -" << bonus << endl;
    }
};

int main(){
   
    derive obj;

    obj.setData();
    
    return 0;
}