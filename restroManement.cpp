#include <iostream>

using namespace std;

class Restrorunt{

    public:


    void burger();

};


void Restrorunt :: burger(){


    int bur;
    int BurgerTotal=0;

   cout << endl << "=======================Burger======================";
    cout << endl << "___________________________________________________";
    cout << endl << "|  1. Zinger Burger                         Rs:299 |";
    cout << endl << "|  2. Tower Burger                          Rs:380 |";
    cout << endl << "|  3. Aalu Tikki Burger                     Rs:180 |";
    cout << endl << "|  4. Cheese Burger                         Rs:399 |";
    cout << endl << "|  5. Combo Burger                          Rs:299 |";
    cout << endl << "|  6. Go Back To The Main Menu                     |"; 
    cout << endl << "|__________________________________________________|" << endl;
    
    cout << "Please select any option :- ";
    cin >> bur;

    switch (bur){
       case '1':
               //Zinger burger
               int qty=0;
               int ztotal=0;

               cout<< endl <<"How much quantity do you want? ";
               cin >> qty;

               ztotal=299*qty;

       break;
    }
    

};


int main(){

    Restrorunt obj;
    char option;

  do{

   cout << endl << "===========================Menu============================" << endl;
   cout << endl << "1. Burger ";
   cout << endl << "2. Pizza ";
   cout << endl << "3. Sandwich ";
   cout << endl << "4. Biryani ";
   cout << endl << "5. Paratha Rolls ";
   cout << endl << "6. Coke ";
   cout << endl << "7. Exit ";
   cout << endl << "============================================================" << endl;

   cout << "Please select any option :- ";
   cin >> option;

   switch (option){

            case '1':
                "1. Burger \n";
                obj.burger();
                break;

            case '2':
                "2. Pizza \n";
                break;

            case '3':
                "3. Sandwich \n";
                break;

            case '4':
                "4. Biryani \n";
                break;

            case '5':
                "5. Paratha Rolls \n";
                break;
            
            case '6':
                "6. Coke \n";
                break;
            

            case '7':
                goto end;
                break;

    }

   } 
   while(option!=7);

   end: cout << endl << "\t Thank you for Visiting \t";

    return 0;
}