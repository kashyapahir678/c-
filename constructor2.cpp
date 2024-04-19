#include <iostream>

using namespace std;

class Sqaure{

    int a;
    int total=0;

    public:

    Sqaure(){
        cout << "enter the value" << endl;
        cin >> a;
        total=a*a;
    }
    ~Sqaure(){
       
        cout << total;
    }

};

int main(){

   Sqaure obj1;
  

    return 0;
}