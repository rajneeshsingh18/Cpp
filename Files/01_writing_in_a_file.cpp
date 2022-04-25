#include <iostream>
#include <fstream>
using namespace std;

int main(){
     
    string str2="Yo thara bhai joginder :)";
    
      // Opening files using constructor and writing it
    ofstream out("samplefile.txt"); //write operation
    out<<str2;

    out.close();
    return 0;
}