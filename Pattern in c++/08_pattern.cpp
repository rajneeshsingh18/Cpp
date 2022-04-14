#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for( int row=1;row<=n;row++){
        for(int col =1; col<=row ; col++){
            cout<<row-col+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}