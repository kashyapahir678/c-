#include <iostream>

using namespace std;

class Base{
    private:
    int a=10;
    int b=20;

    public:
    int c=30;  

    void printData(){
        cout << a << endl;
        cout << b << endl;
    }
};

class Derive : public Base{
    public:
    int d=40;
};

int main(){

    Derive obj;

    cout << obj.c << endl;
    cout << obj.d << endl;
    obj.printData() ;

    return 0;
}