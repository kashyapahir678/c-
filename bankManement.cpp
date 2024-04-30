#include <iostream>

using namespace std;

class Account{
    int actNo;
    char name[50];
    char address[50];
    int balance;
    char type;

    public:
    void create_Account();
    void deposit_Money();
    void display_account();
    void withdraw_money();
};

void Account :: create_Account(){
    cout << endl << "Enter the Account Number : " ;
    cin >> actNo;
    cout << endl << "Enter the name of Account Holder Name : ";
    cin >> name;
    cout << endl << "Enter your Address : ";
    cin >> address;
    cout << endl << "Enter the type of the Account (c/s) : ";
    cin >> type;
    cout << endl << "Enter the Deposit Amount (For saving minimum Amount 500 - For current minimum Amount 1000) : ";
    cin >> balance;
    cout << endl << "Your Account Created Successfuly!";
};

void Account :: deposit_Money(){
    int d;
    cout << endl << "Enter Amount you want to Deposit : ";
    cin >> d;
    balance+=d;
    cout << endl << "Available Balance : " << balance;
};

void Account :: display_account(){
    cout << endl << "Name - " << name;
    cout << endl << "Address - " << address;
    cout << endl << "Type - ";
    if(type=='c'){
        cout << "Current Account ";
    }else{
        cout << "Savings Account";
    }
    cout << endl << "Balance - " << balance; 
    
};

void Account :: withdraw_money(){
    int w;
    cout << endl << "Enter your Amount for Withdraw : ";
    cin >> w;
    balance=balance-w;
    if(balance<w){
        cout << endl << "Insufficient Balance! : ";
    }
    cout << endl << "Available Balance : " << balance;

};

int main(){
    
    char ch;
    Account obj;

    do
    {
       cout << "========================";
       cout << endl << "Main Menu ";
       cout << endl << "1. New Account ";
       cout << endl << "2. Deposit Amount ";
       cout << endl << "3. Withdraw Amount ";
       cout << endl << "4. Display Inquiry ";
       cout << endl << "5. All Account Holder List ";
       cout << endl << "6. Close An Account ";
       cout << endl << "7. Modify An Account ";
       cout << endl << "8. Exit ";
       cout << endl << "========================" << endl;

       cout << "Select Your Option :- "<< endl;
       cin >> ch;

       switch(ch){
         case '1':
         "1. New Account \n";
         obj.create_Account();
         break;

         case '2':
         "2. Deposit Amount \n";
         obj.deposit_Money();
         break;

         case '3':
         "3. Withdraw Amount \n";
         obj.withdraw_money();
         break;

         case '4':
         "4. Display Inquiry \n";
         obj.display_account();
         break;
       }


    } while (ch==8);
    return 0;
    

    return 0;
}