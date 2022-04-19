//Program to find even and odd elements in an array

#include <iostream>
using namespace std;

int main(){

    int arr[10],n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"\nEnter elements of array : ";
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\nEven elements of array : ";
    for(int i=0; i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }

     cout<<"\nOdd elements of array : ";
    for(int i=0; i<n;i++){
        if(arr[i]%2==1){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}