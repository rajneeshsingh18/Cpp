#include <iostream>
using namespace std;

//     1
//   23
//  456
// 78910

int main(){
    
    int n;
         int start=1;

    cout<<"Enter the value of n ";
    cin>>n;

    for(int row=1;row<=n;row++){

        for(int space=n-row;space;space--){
            cout<<" ";
        }
        
        for(int col=1;col<=row;col++){
           
            cout<<start;
            start++;
        }
        cout<<endl;
    }
    return 0;
}