#include <iostream>

using namespace std;

int main() {

    int arr[5];
    int n;

    cout << "enter the length of array" << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=n-1; i>=0; i--){
        cout << arr[i] << endl;
    }


    return 0;
}