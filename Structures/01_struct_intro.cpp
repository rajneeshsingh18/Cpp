#include <iostream>
using namespace std;

struct Employee
{
    int emplyID;
    char favchar;
    float salary;
};

// typedef struct Employee
// {
//     int emplyID;
//     char favchar;
//     float salary;
// } ep ;

int main(){

    struct Employee raj;

    struct Employee ankur;

    // ep Yashwant ; //Same as struct Employee Yashwant
      struct Employee Yashwant;

    raj.emplyID=23;
    raj.favchar='S';
    raj.salary=1234354.34;

    ankur.emplyID=34;
    ankur.favchar='S';
    ankur.salary=680;

    Yashwant.emplyID=2;
    Yashwant.favchar='R';
    Yashwant.salary=1332;


    cout<<"The value of Employee ID for raj :  "<<raj.emplyID<<endl;
    cout<<"The value of favchar for raj :  "<<raj.favchar<<endl;
    cout<<"The value of salaary for raj :  "<<raj.salary<<endl;

    cout<<"\n\nThe value of Employee ID for yashwant :  "<<Yashwant.emplyID<<endl;
    cout<<"The value of favchar for yashwant :  "<<Yashwant.favchar<<endl;
    cout<<"The value of salaary for yashwant :  "<<Yashwant.salary<<endl;

    cout<<"\n\nThe value of Employee ID for  ankur :  "<< ankur.emplyID<<endl;
    cout<<"The value of favchar for  ankur :  "<< ankur.favchar<<endl;
    cout<<"The value of salaary for ankur :  "<< ankur.salary<<endl;
    return 0;

}