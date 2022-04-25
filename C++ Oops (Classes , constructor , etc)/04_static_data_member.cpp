#include <iostream>
using namespace std;

class Employee{
     int id;
     static int count;

     public:
     
    //  static function
     static void getcount(void);

     void setdata(void){
         cout<<"Enter the id :";
         cin>>id;

         count++;
     }

     void getdata(void){
         cout<<"The id of this employee is "<<id<<" and the employee number "<<count<<endl;
     }

     
};

//count is the static data memeber of class employee

int Employee :: count =1000; // default value of count is 0 .

void Employee:: getcount(void){
    //cout<<id //throws an erroe
    cout<<"the value of count is " << count <<endl; 
}

int main(){
    
    Employee raj , ankur , shaan;

    Employee harry;
 
    // id and count are privat data members
//    raj.id=1;  note: declared private here
    //raj.count=1;

    harry.setdata();
    harry.getdata();

    Employee :: getcount();

    raj.setdata();
    raj.getdata();

    Employee::getcount();

    shaan.setdata();
    shaan.getdata();

    Employee::getcount();




    return 0;
}