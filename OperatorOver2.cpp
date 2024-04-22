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

    void printData(){
        cout << "first value " << a << endl;
        cout << "second value " << b << endl;
    }

    Complex operator-(Complex c){
        Complex t;
        t.a=a-c.a;
        t.b=b-c.b;

        cout << "the a" << t.a << endl;
        cout << "the b" << t.b << endl;

        return t;
    }

};

int main(){

    Complex c1,c2,c3;

    c1.setData(5,6);
    c2.setData(8,9);
    cout << "The first input" << endl;
    c1.printData();
    cout << "The secoun input" << endl;
    c2.printData();
    c3=c2-c1;
    c3.printData();


    return 0;
}