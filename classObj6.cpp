#include <iostream>

using namespace std;

class Report{ 

    int admNo;
    char name[20];
    float marks[5];
    float average;
    void GetAvg(){
        average=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    }

    public:

    void ReadInfo();
    void DisplayInfo();

};

void Report :: ReadInfo(){

    cout << "Enter the admNo : " << endl;
    cin >> admNo;

    cout << "Enter the Name : " << endl;
    cin >> name;

    cout << "Enter the Marks In : " << endl;
    for(int i=0; i<=4; i++){
        cout << "Subject - " << i+1 << endl;
        cin >> marks[i];
    }
    GetAvg();
}

void Report :: DisplayInfo(){
    cout << "admNo : " << admNo << endl;
    cout << "Name : " << name << endl;
    cout << "Marks : " << marks[0] << "\t" << marks[1] << "\t" << marks[2] << "\t" << marks[3] << "\t" << marks[4] << endl;
    cout << "Average : " << average ;

}

int main(){

    Report obj;

    obj.ReadInfo();
    obj.DisplayInfo();

    return 0;
}
