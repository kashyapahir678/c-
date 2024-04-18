#include <iostream>

using namespace std;

class Test{

    private:
    int Testcode;
    char Description[50];
    int Nocandidate;
    int cal;
    int centerReq(int Nocandidate);

    public:

    void getData(){
        cout << "enter the testcode " << endl;
        cin >> Testcode;

        cout << "enter the Description " << endl;
        cin >> Description;

        cout << "enter the Number of candiate " << endl;
        cin >> Nocandidate;
    }

    

    void displayData(){
        cout << "Testcode " << Testcode << endl;
        cout << "Description " << Description << endl;
        cout << "Nocandidate " << Nocandidate << endl;
        cout << "centerReq " << centerReq(Nocandidate);
    }

};

int Test :: centerReq(int Nocandidate){
        cal=(Nocandidate/100+1);
        return cal;
    }


int main(){

    Test obj;

    obj.getData();
    obj.displayData();

    return 0;
}