#include <iostream>
using namespace std;

// A 
// B C
// D E F
// G H I J

int main(){
    
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
      char start='A';
    for(int row=1;row<=n;row++){

        for(int col=1;col<=row;col++){
          cout<<start<<" ";
          start++;

        }
        cout<<endl;
    }
    return 0;
}