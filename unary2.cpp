#include <iostream>

using namespace std;

class Complex{

    int a;
    int b;

    public:

    void setData(int x, int y);
    void printData();
    void operator--(int);
  
};

void Complex :: setData(int x, int y){
    a=x;
    b=y;
}

void Complex :: printData(){
    cout << a << endl;
    cout << b << endl;
}

void Complex :: operator--(int){
    a--;
    b--;
}

int main(){

    Complex c;

    c.setData(4,9);
    c.printData();
    c--;
    c.printData();

    return 0;
}