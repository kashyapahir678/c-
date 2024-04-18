#include <iostream>

using namespace std;

int main(){

   char ch;

   cout << "enter the character" << endl;
   cin >> ch;

   if(ch >= 65 && ch <= 90){
      ch = ch+32;
      cout << "character in lower \t" << ch;
   }
   else if(ch >=97 && ch <=122){
      ch = ch-32;
      cout << "character in upper \t" << ch;
   }
   else {
      cout << "entred character is not a alphabet";
   }

    return 0;
}

