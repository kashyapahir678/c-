#include <iostream>

using namespace std;

class Base{
    public:
    int x;
    int y;

     void setData(){
        cout << "enter the value of x" << endl;
        cin >> x;
        cout << "enter the value if y" << endl;
        cin >> y;
     }
};

class Derive1 : public Base{
    public:

    void sum(){
        cout << "sum is -" << x+y << endl;

    }

};

class Derive2 : public Base{
    public:

    void multi(){
        cout << "multi is -" << x*y << endl;
    }
};

int main(){

    Derive1 obj1;
    Derive2 obj2;

    obj1.setData();
    obj1.sum();

    obj2.setData();
    obj2.multi();

    return 0;
}