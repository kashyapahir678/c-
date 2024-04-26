#include <iostream>

using namespace std;

class Student{

    int sid;
    char name[20];
    int marks[3];
    int total=0;
    int percentage=0;    

    public:
    void getdata(){
        cout << "enter the student id :" << endl;
        cin >> sid;

        cout << "enter the student name" << endl;
        cin >> name;

        cout << "enter the 3 subject marks" << endl;
        for(int i=0; i<3; i++){
            cin >> marks[i];
            total+=marks[i];
            percentage=total*100/300;
        }
        
    }

    void printData(){
        cout << "student Id : " << sid << endl;
        cout << "student Name : " << name << endl;
        for(int i=0; i<3; i++){
            cout << "subject : " << marks[i] << endl;
            
        }
        cout << "Total Marks is : " << total << endl;
        cout << "Percentage is : " << percentage << endl;
    }
    
};

int main(){

    Student stu[4];

    for(int i=0; i<4; i++){
        cout << "enter the student " << i+1 << endl;
        stu[i].getdata();
        stu[i].printData();

    }

    return 0;
}