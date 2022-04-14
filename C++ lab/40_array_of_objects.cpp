/*  Q1. Write  a program that defines a class employee with the following member :
             Name , 
             emp_ I’d , 
             salary.
        Write constructor function for the class and a function put data
        that displays the data of the employee.
        Now create an array of employees and input the data for 5 employees and 
        display that data using the putdata function.
*/


#include <iostream>
#include <cstring>
using namespace std;

class Employee{ 
    //data members of class Employee
    char Name[20];
    int emp_ID;
    int salary;

    public: 
    
    //Constructor decalartion
    Employee(void);

    //member functions
    void putdata(void){

    cout<<"Enter Your Name : ";
    cin>>Name;
    cout<<"Enter Your employee I'D : ";
    cin>>emp_ID;
    cout<<"Enter Your Salary : ";
    cin>>salary;

    cout<<"\n\n"<<endl;
    }

   void displaydata(void){

    cout<<"********Details Of Employee********"<<endl;
    cout<<" Name          : "<< Name<<endl;
    cout<<" Employee Id  : "<< emp_ID<<endl;
    cout<<" Salary       : " <<salary<<endl;
    cout<<"\n-------------------------------\n\n";

   }

};

//default construtor with no parametres
Employee  :: Employee(void){
   emp_ID = 0;
   salary = 0;
}

int main(){
    int n;
    cout<<"Enter the number of Employee in Your Company : ";
    cin>>n;

    //array of objects
    Employee employees[n];

    for(int i=0;i<n;i++){

        employees[i].putdata();
        employees[i].displaydata();
    }

    return 0;
}