#include <iostream>

using namespace std;


int main(){

    int a,b,c;

    cin >> a >> b >> c ;

    if(a > b && a > c){
        cout << "A is largest" << endl;
    }
    else if(b > a && b > c){
        cout << "B is largest" << endl;
    }
    else{
        cout << "C is largest" << endl;
    }

    return 0;
}