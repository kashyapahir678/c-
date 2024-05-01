#include <iostream>

using namespace std;

class Employee{

    int id;
    static int count;

    public:

    void getdata(){
        cout << "enter the employee id" << endl;
        cin >> id;
        count++;
    }

    void printdata(){
        cout << "empoyee id is " << id << endl << "empoyee count is " << count << endl;
    }
};

int Employee :: count=2002;

int main(){
    Employee raju,kaju,kalu;

    raju.getdata();
    raju.printdata();

    kaju.getdata();
    kaju.printdata();

    kalu.getdata();
    kalu.printdata();

    return 0;
}