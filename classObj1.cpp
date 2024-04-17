#include <iostream>

using namespace std;

class Student{
private:
    int admno;
    char sname[20];
    float total;
    float english, math, science;
    float ctotal(float english, float math, float science);

public:
    float Takedata(){
        cout << "enter the admno :" << endl;
        cin >> admno;

        cout << "enter the sname :" << endl;
        cin >> sname;

        cout << "enter the english marks :" << endl;
        cin >> english;

        cout << "enter the math marks :" << endl;
        cin >> math;

        cout << "enter the science marks :" << endl;
        cin >> science;

  
        
    }

    
    float showData(){
        cout << "admno" << admno << endl;
        cout << "sname" << sname << endl;
    
        cout << ctotal(english,math,science);

    }
};

 float Student :: ctotal(float english, float math, float science){
     total=english+math+science;
     return total;
 };

int main(){
  
    Student obj;

    
    obj.Takedata();
    obj.showData();

    return 0;
}