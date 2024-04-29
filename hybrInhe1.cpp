#include <iostream>

using namespace std;

class A{

    public:
    int a;

    void setA(){
        cout << "enter the value of a" << endl;
        cin >> a;
    }
};

class B : public A{

    public:
    int b;

    void setB(){
        cout << "enter the value of b" << endl;
        cin >> b;
    }

};

class c{
    public:
    int c;

    void setc(){
        cout << "enter the value of c" << endl;
        cin >> c;
    }
};

class D : public c, public B{

    public:

    void multi(){
        cout << "Multiply of a b and c " << a*b*c << endl;
    }

};

int main(){

    D obj;
    obj.setA();
    obj.setB();
    obj.setc();
    obj.multi();


    return 0;
}