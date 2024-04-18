#include <iostream>

using namespace std;

int main () {

    int n;
    int a=0;
    int b=1;
    int total=a+b;

    cout << "enter the value";
    cin >> n;

    cout << a << endl;
    cout << b << endl;

    for(int i=0; i<=n; i++){
        cout << total << endl;
        a=b;
        b=total;
        total=a+b;
    }

    return 0;
}