#include <iostream>

using namespace std;

class Triangle{

    int h,b;
    int total=0;

    public:

    Triangle(){
        cout << "enter the value of h" << endl;
        cin >> h;

        cout << "enter the value of b" << endl;
        cin >> b;

        total=h*b/2;
    }

    ~Triangle(){
        
        cout << total;
    }

};

int main(){

   Triangle obj1;

    return 0;
}
