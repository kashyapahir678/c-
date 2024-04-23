#include <iostream>

using namespace std;

 class Sample{
    int a;
    int b;

    public:

    void getData(int x, int y);
    void printData();
    friend Sample storeData(Sample s1, Sample s2);

 };

 void Sample :: getData(int x, int y){
    a=x;
    b=y;
 }

 void Sample :: printData(){
     cout << a << endl;
     cout << b<< endl;
 }

 Sample storeData(Sample s1, Sample s2){
    Sample s3;
    s3.getData((s1.a-s2.a),(s1.b-s2.b));
    return s3;
 }

 int main(){

    Sample c,c1,sum;
    c.getData(9,5);
    c.printData();
    c1.getData(3,2);
    c1.printData();
    sum=storeData(c,c1);
    sum.printData();

    return 0;
 }