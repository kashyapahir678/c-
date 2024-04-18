#include <iostream>

using namespace std;

class Flight{
    private:
    int fNumber;
    char Destination[20];
    float Distance;
    float Fuel;


    public:

    float calcFuel(){
        if(Distance<=1000){
            return 500;
        }
        else if(Distance<=2000){
            return 1100;
        }
        else{
            return 2200;
        }
    }

    float FeedInfo(){
        cout << "enter the Flight number" << endl;
        cin >> fNumber;

        cout << "enter the Destination" << endl;
        cin >> Destination;

        cout << "enter the Distance" << endl;
        cin >> Distance;

    }

    float ShowInfo(){
        cout << "Flight Number : " << fNumber;
        cout << "Destination is : " << Destination;
        cout << "Distance is : " << Distance;
        cout << "Fuel is : " << calcFuel();
    }
};

int main(){
   
   Flight obj;

   obj.FeedInfo();
   obj.ShowInfo();
 
    return 0;
}