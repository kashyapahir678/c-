#include <iostream>

using namespace std;

int main() {

    char arr[50];
    int i,j;

    cout << "enter the string";
    cin >> arr;

    for( i=0; arr[i]!='\0'; i++){
        cout << arr[i] << endl;
    }

    for( j=i; j>=0; j--){
        cout << arr[j];
    }

    return 0;
}