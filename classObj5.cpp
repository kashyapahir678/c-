#include <iostream>

using namespace std;

class Book{

    private:

    int BookNo;
    char BookTitle[50];
    float Price;
    float total;
    float TotalCost(int total);

    public:

    void getData(){

        cout << "enter the BookNo :" << endl;
        cin >> BookNo;

        cout << "enter the BookTitle :" << endl;
        cin >> BookTitle;

        cout << "enter the price :" << endl;
        cin >> Price;
    }

    void showData(){
       cout << "BookNo : " << BookNo << endl;
       cout << "BookTitle : " << BookTitle << endl;
       cout << "Price : " << Price << endl;
       cout << "Total is : " << TotalCost(total);
    }

};

float Book :: TotalCost(int total){
    int n;
    cout << "enter the number of copy ";
    cin >> n;

    total=Price*n;
    return total;
}

int main(){

    Book obj;

    obj.getData();
    obj.showData();

    return 0;
}