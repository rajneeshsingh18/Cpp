#include <iostream>
using namespace std;

// D 
// C D
// B C D 
// A B C D

int main(){
    
    int n;
    cout<<"Enter the value n : ";
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        char start='A'+n-row;
        while(col<=row){
            
            cout<<start<<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}