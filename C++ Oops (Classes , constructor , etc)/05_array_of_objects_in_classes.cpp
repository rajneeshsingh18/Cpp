#include <iostream>
#include <cstring>
using namespace std;


class employee{
      int id;
      int salary;
      char name[10];

      public:

      void getdata(void){
          cout<<"Enter the your Id : ";
          cin>>id;
          cout<<"Enter Your Name : ";
          cin>>name;
          cout<<"Enter your salary : ";
          cin>>salary;
      }

       void displaydata(void){
          cout<<"\n Id     : "<<id;
          cout<<"\n Name   : "<<name;
          cout<<"\n Salary : "<<salary;
      }
};

int main(){
    
    int n;
    cout<<"Enter the total number of employees in company Google : ";
    cin>>n;

    //array of objects
    employee Google[n];

    for(int i=0 ; i<n ;i++){

        Google[i].getdata();
        cout<<"\n";
    }

    for(int i=0 ; i<n; i++){

        Google[i].displaydata();
        cout<<"\n";

    }

    return 0;
}