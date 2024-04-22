#include <iostream>

using namespace std;

class Student{

    int id;
    char name[20];


    public:

    void getData();
    void setData();
};

void Student :: getData(){
    cout << "enter the id" << endl;
    cin >> id;

    cout << "enter the name" << endl;
    cin >> name;
}

void Student :: setData(){
    cout << id;
}

int main(){

    Student marks[30];
    int n,i;

    cout << "enter the number of employee" << endl;
    cin >> n;

    for(int i=0; i<=n; i++){
        marks[i].getData();

        cout << "student data  - " << endl;
    }

    for(int i=0; i<=n; i++){
        marks[i].setData();
    }

    return 0;
}