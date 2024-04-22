#include <iostream>

using namespace std;

class Complex{
    int a;
    int b;

    public:
    void getData(int x,int y);
    void setData();
    void operator++();

};

void Complex :: getData(int x,int y){
    a=x;
    b=y;
}

void Complex :: setData(){
    cout << a << endl;
    cout << b << endl;
}

void Complex :: operator++(){
    ++a;
    ++b;
}

int main(){

    Complex c;

    c.getData(5,9);
    c.setData();
    ++c;
    c.setData();

    return 0;
}