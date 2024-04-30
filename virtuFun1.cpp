#include <iostream>

using namespace std;

class Base{
    public:
    int a=20;
    virtual void print()=0;
};

class Derive : public Base{
    public:
    int b=52;
    void print(){
        cout << "a" << a << endl;
        cout << "b" << b << endl;
    }
};

int main(){

    Base * obj_poiner;
    Derive obj;

    obj_poiner = &obj;
    obj.print();

    return 0;
}