#include <iostream>
using namespace std;

void update( int arr[], int n){
     
     //updating arr first element
     arr[0]=120;

    cout<<"Printing array in function update()"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to main function"<<endl;
}

int main(){
    
    int arr[]={2,3,6};
    update(arr,3);  //arr base or first address is transfered to update() function

    cout<<"printing array in main function"<<endl;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}