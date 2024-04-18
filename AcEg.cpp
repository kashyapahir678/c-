#include <iostream>

using namespace std;

int main() {

    int j=2;

    for(int i=65; i<=90; i+=2){
        if(j%2==0){
            cout << char(i);
        }
        else{
            cout << char(i+32);
        }
        j++;
    }
    
    return 0;
}