#include <iostream>

using namespace std;

class Base{
    public:
    int x;
    int y;

    void setData(){
        cout << "enter the value of x "<< endl;
        cin >> x;
        cout << "enter the value of y "<< endl;
        cin >> y;
    }

};

class Derive1 : public Base{
    public:

    void sub(){
        cout << "subtraction is -" << x-y << endl;
    }

};

class Derive2 : public Base{
    public:

    void devide(){
        cout << "Divison is -" << x/y << endl; 
    }
};

int main(){

    Derive1 obj1;
    Derive2 obj2;

    obj1.setData();
    obj1.sub();

    obj2.setData();
    obj2.devide();

    return 0;
}