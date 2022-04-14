#include <iostream>
using namespace std;

//    1
//   22
//  333
// 4444

int main(){

    int n;
    cout<<"Enter the value of n ";
    cin>>n;

    for(int row=1;row<=n;row++){

        for(int space=n-row;space;space--){
            cout<<" ";
        }

        for(int col=1;col<=row;col++){
            cout<<row;
        }
        cout<<endl;
    }

    return 0;
}