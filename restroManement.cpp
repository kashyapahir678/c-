#include <iostream>

using namespace std;

class Restrorunt{

    public:
    int arr[5]={240,160,120,30,400};
    char item;
    int qty1[1]; int qty2[1]; int qty3[1]; int qty4[1]; int qty5[1];
    int q;
    int sum=0;
    int total=0;


    void menu();
    void order();
    void bill();

};


void Restrorunt :: menu(){

    cout << endl << "=======================Menu======================";
    cout << endl << "___________________________________________________";
    cout << endl << "|  1.  Pizza                                Rs:240 |";
    cout << endl << "|  2.  Burger                               Rs:160 |";
    cout << endl << "|  3.  Green Sandwich                       Rs:120 |";
    cout << endl << "|  4.  cold                                  Rs:30 |";
    cout << endl << "|  5.  Biryani                              Rs:400 |"; 
    cout << endl << "|__________________________________________________|" << endl;

};


void Restrorunt :: order(){

    cout << endl << "=======================Order======================" << endl;

    cout << "please enter number from menu you want to eat :- ";
    cin >> item;

    switch (item){
       case '1':

               

               for(int i=0; i<1; i++){
                   cout<< endl <<"enter pizza quantity do you want? ";
                   cin >> qty1[i];
                   sum=qty1[i]*arr[0];
               }
               cout << endl << "Total :-" << sum;


       break;

       case '2':

                for(int i=0; i<1; i++){
                   cout<< endl <<"enter Burger quantity do you want? ";
                   cin >> qty2[i];
                   sum=qty2[i]*arr[1];
               }
               cout << endl << "Total :-" << sum;

        break;

        case '3':

               for(int i=0; i<1; i++){
                   cout<< endl <<"enter Green Sandwich quantity do you want? ";
                   cin >> qty3[i];
                   sum=qty3[i]*arr[2];
               }
               cout << endl << "Total :-" << sum;

        break;

        case '4':

               for(int i=0; i<1; i++){
                   cout<< endl <<"enter Cold quantity do you want? ";
                   cin >> qty4[i];
                   sum=qty4[i]*arr[3];
               }


               cout << endl << "Total :-" << sum;
        break;

        case '5':
               for(int i=0; i<1; i++){
                   cout<< endl <<"enter Cold quantity do you want? ";
                   cin >> qty5[i];
                   sum=qty5[i]*arr[4];
               }

               cout << endl << "Total :-" << sum;
        break;
    }



};

void Restrorunt :: bill(){

     

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
                obj.order();
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