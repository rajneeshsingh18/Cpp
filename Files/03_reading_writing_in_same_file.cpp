#include <iostream>
#include <fstream>
using namespace std;

int main(){
   
    ofstream wout("hello.txt");

    string name;
    cout<<"Enter your Name : ";
    cin>>name;
    wout<<name + " is my name";
    wout.close();
    

    ifstream rin("hello.txt");
    string content;
    rin>>content;
    cout<<"The content of the file is : "<<content;

     rin.close();

    return 0;
}