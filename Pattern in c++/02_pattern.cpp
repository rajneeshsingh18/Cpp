#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
     
    for(int row=1 ; row<=n;row++){
        //for every row run the columns
        for(int col=1;col<=n;col++){
            // cout<<" * ";
            cout<< row;
        }
        //When one row is printed we need to add newline
        cout<<endl;
    }
    return 0;
}