#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string str;

     // Opening files using constructor and reading it
    ifstream  in("hello.txt"); // Read operation
    in>>str;
    getline(in,str);
    getline(in,str);
    cout<<str;

    in.close();

    return 0 ;
}