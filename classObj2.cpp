#include <iostream>

using namespace std;


class Batsman
{
   
private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    int batavg;
    int calcavg(int innings, int notout, int runs);

public:
    void readData()
    {

        cout << "enter the bcode : " << endl;
        cin >> bcode;

        cout << "enter the bname : " << endl;
        cin >> bname;

        cout << "enter the innings : " << endl;
        cin >> innings;

        cout << "enter the notout : " << endl;
        cin >> notout;

        cout << "enter the runs : " << endl;
        cin >> runs;
    }

    void displaydata(){
        cout <<  bcode << endl << bname << endl << innings << endl << notout << endl << runs << endl << batavg;
    }
};

int Batsman :: calcavg(int innings, int notout, int runs){
    batavg=runs/(innings-notout);
    return batavg;
};


int main(){

    Batsman obj;

    obj.readData();
    obj.displaydata();

    return 0;
}