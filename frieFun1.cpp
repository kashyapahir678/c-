#include <iostream>

using namespace std;

class Sample{
    int x;
    int y;

    public:
    friend Sample storeData(Sample o1,Sample o2);
    void getData(int a,int b);
    void printData();

};

void Sample :: getData(int a, int b){
    x=a;
    y=b;
}

void Sample :: printData(){
    cout << x << ":" <<y << endl;
}

Sample storeData(Sample o1,Sample o2){
    Sample o3;
    o3.getData((o1.x+o2.x),(o2.y+o2.y));
    return o3;
}

int main(){

    Sample c,c1,sum;
    c.getData(10,5);
    c.printData();
    c1.getData(4,6);
    c1.printData();
    sum=storeData(c,c1);
    sum.printData();
    


    return 0;
}

