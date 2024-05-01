#include <iostream>

using namespace std;

class Restrorunt{

    public:
    int qty;
    int sum;
    int total=0;


    void menu();

};


void Restrorunt :: menu(){


    char bur;
    int BurgerTotal=0;

    next:

   cout << endl << "=======================Menu======================";
    cout << endl << "___________________________________________________";
    cout << endl << "|  1.  Pizza                                Rs:240 |";
    cout << endl << "|  2.  Burger                               Rs:160 |";
    cout << endl << "|  3.  Green Sandwich                       Rs:120 |";
    cout << endl << "|  4.  cold                                  Rs:30 |";
    cout << endl << "|  5. Go Back To The Main Menu                     |"; 
    cout << endl << "|__________________________________________________|" << endl;
    
    cout << "Please select any option :- ";
    cin >> bur;

    switch (bur){
       case '1':
               //Zinger burger

               cout<< endl <<"How much quantity do you want? ";
               cin >> qty;

               sum=240*qty;

               cout << endl << "Total :-" << sum;
               goto next;

       break;

       case '2':
               //Tower Burger

               cout << endl << "How much quantity do you want? ";
               cin >> qty;

               sum=160*qty;

               cout << endl << "Total :-" << sum;
               goto next;
        break;

        case '3':
               //Cheese Burger

               cout << endl << "How much quantity do you want? ";
               cin >> qty;

               sum=120*qty;

               cout << endl << "Total :-" << sum;
               goto next;
        break;

        case '4':
               //Combo Burger

               cout << endl << "How much quantity do you want? ";
               cin >> qty;

               sum=30*qty;

               cout << endl << "Total :-" << sum;
               goto next;
        break;

        case '5':
               //Go back to main menu
        break;
    }
    

};


int main(){

    Restrorunt obj;
    char option;


    

  do{

   cout << endl << "===========================Resto============================" << endl;
   cout << endl << "1. For Menu ";
   cout << endl << "2. For Order ";
   cout << endl << "3. For Bill ";
   cout << endl << "4. Exit ";
   cout << endl << "============================================================" << endl;

   cout << "Please select any option :- ";
   cin >> option;

   switch (option){

            case '1':
                "1. For Menu \n";
                obj.menu();
                break;

            case '2':
                "2. For Order \n";
                break;

            case '3':
                "3. For Bill \n";
                break;

            case '4':
                goto end;
                break;

    }

   } 
   while(option!=7);

   end: cout << endl << "\t Thank you for Visiting \t";

    return 0;
}