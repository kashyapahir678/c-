#include <iostream>

using namespace std;

class Complex{

    int a;
    int b;

    public:

    void setData(int x, int y){
        a=x;
        b=y;
    }

    void PrintData(){
        cout << "first value :" << a << endl;
        cout << "secound value :" << b << endl;
    }

    Complex operator+(Complex c){
        Complex t;
        t.a=a+c.a;
        t.b=b+c.b;

        cout << "the a" << t.a << endl;
        cout << "the b" << t.b << endl;

        return t;
    }


};

int main(){

    Complex c1,c2,c3;
    c1.setData(3,6);
    c2.setData(2,4);
    cout << "The first input " << endl;
    c1.PrintData();
    cout << "The secound input" << endl;
    c2.PrintData();
    c3=c1+c2;
    c3.PrintData();


    return 0;
}