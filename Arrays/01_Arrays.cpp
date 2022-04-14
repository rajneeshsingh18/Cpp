#include <iostream>
using namespace std;

#include <iomanip>
using std::setw; 

int main(){

    int n[10]; // n is the array with 10 element of type integer
      

    //another way of creating array in c++14
    //array<type , arraySize> arrayName;
    // array < int,10>n;

    for( int i=0;i<10;i++){
        n[i]=i+20; // set element at loaction i to i+20
    }

    cout<<"Element" <<setw(13)<<"Value"<<endl;

    // output each array elements value 
    for(int j=0 ; j<10; j++){
        cout << setw(7) << j << setw(13) << n[j]<<endl;
    }

    return 0;
}