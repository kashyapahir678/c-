#include <iostream>

using namespace std;

void Area(int a){
    cout << "Area of sqaure is :" << a*a << endl;
}

void Area(int h, int b){
    cout << "Area of rectangle is : " << h*b << endl;
}

void Area(int h,int b, int div){
    cout << "Area of triangle is : "<< h*b/2 << endl;
}

void Area(int p,int r,int t, int div){
    cout << "simple Interst is : " << p*r*t/100 << endl;
}

void Area(int bh,int s1, int s2, int b, int h){
    cout << "Area of triangular prism : " << bh+(s1+s1+b)*h << endl;
}

int main(){

    Area(10);
    Area(50,30);
    Area(20,5,2);
    Area(2000,2,3,100);
    Area(20,5,9,12,2);

    return 0;
}