#include <iostream>

using namespace std;

int factorial(int n){
  
   if(n<=1){
    return 1;
   }
   else{
      return (n*factorial(n-1));
   }

}

int main(){

    int n;
    int total=0;

    cout << "enter the value" << endl;
    cin >> n;

    total=factorial(n);

    cout << "Factorial number is : " << total;

    return 0;
}