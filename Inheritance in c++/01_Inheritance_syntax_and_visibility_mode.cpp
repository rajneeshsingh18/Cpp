#include <iostream>
using namespace std;

class Employee{

    public:
        int id ;
        float salary;
        
        //deafult constructor
        Employee(){

        }

        Employee( int emId){
            id = emId;
            salary=34534.0;
        }

};

 /*
 // Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Note:
    --> Default visibility mode is private
    --> Public Visibility Mode: Public members of the base class becomes Public members of the derived class
    --> Private Visibility Mode: Public members of the base class become private members of the derived class
    --> Private members are never inherited


*/

//creating a Programmer class derived from empoyee base class
class Programmer : public Employee{

    public:
    int lang_code;

    Programmer(){

    }
    Programmer( int emID){
        id=emID;
        lang_code=192;
    }

    void getdata(){
        cout<<id<<endl;
    }
};

int main(){
      
      Employee rajneesh(101), shaan(201);
      cout<<rajneesh.salary<<endl;
      cout<<shaan.salary<<endl;

      Programmer skillF(301);
      cout << skillF.lang_code<<endl;
      cout << skillF.id<<endl;
      skillF.getdata();

    return 0;
}