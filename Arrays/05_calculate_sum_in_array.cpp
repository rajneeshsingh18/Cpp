#include <iostream>
using namespace std;

int sumarray(int arr[],int n){

    int sum=0;
    for (int i=0 ; i<n;i++){
        sum=sum+arr[i];
    }
    return sum;

}

int main(){
    
    int a[100],n;
    cout<<"Enter size of array: ";
    cin>>n;

    //Taking the array input from the user 
    cout<<"Enter elements of array : ";
    for( int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Sum of all elements in a array : "<<sumarray(a,n);

    return 0;
}