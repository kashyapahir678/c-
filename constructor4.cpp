#include <iostream>

using namespace std;

class Area{

    int a;


    public:

    Area(int a){
      cout << "Area of sqaure is :" << a*a << endl;
    }

    Area(int w,int l){
        cout << "Area of rectangle is :" << w*l << endl;
    }

    Area(int p,int r, int t){
        cout << "Simple Interst is : " << p*r*t/100 << endl;
    }


};

int main(){

    int a=10;

    Area area(10),rectangle(20,30),interset(2500,2,3);


    return 0;
}