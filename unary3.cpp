#include <iostream>

using namespace std;

class Complex{

    int a;
    int b;

    public:

    void getData(int x, int y);
    void setData();
    void operator++(int);
};

void Complex :: getData(int x, int y){
    a=x;
    b=y;
}

void Complex :: setData(){
    cout << a << endl;
    cout << b << endl;
}

void Complex :: operator++(int){
    a++;
    b++;
    a=-a;
    b=-b;

}

int main(){

   Complex c;

   c.getData(6,7);
   c.setData();
   c++;
   c.setData(); 

    return 0;
}