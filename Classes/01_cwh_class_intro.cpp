#include <iostream>
#include <cstring>
using namespace std;

class Employee{
    //by default all data members and member function are private.
    private : 
        int salary;
        int mobile_number;
    public:
        char name[20];
        int emply_id;
        
        //memeber function prototype
        void setdata(int s , int mob );

        void displaydata(){
            cout<<"Your Name            : "<<name;

            cout<<"\nYour employee ID   : "<<emply_id;

            cout<<"\nYour Salary        : "<<salary;

            cout<<"\nYour mobile_number : "<<mobile_number;
           
        }

};

//scope resolution operator 
void Employee::setdata(int s , int mob){
    salary=s;
    mobile_number=mob;
}

int main(){

    Employee ep1;

    //ep1.salary=20000; //--> this will throw an error as a declare private data member
    
    strcpy(ep1.name,"Rajneesh");
    ep1.emply_id=110;
    ep1.setdata(20000,901457556);

    ep1.displaydata();



    return 0;
}