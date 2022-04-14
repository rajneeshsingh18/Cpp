#include <iostream>
using namespace std;

// A 
// B C 
// C D E
// D E F G

int main(){
    
    int n;
    cout<<"Enter the value of n ";
    cin>>n;

    for(int row=1;row<=n;row++){

    for(int col=1;col<=row;col++){
        char ch='A'+row+col-2;
        cout<<ch<<" ";

    }
    cout<<endl;

    }
    return 0;
}