//Ques15. WAP to find the maximum and minimum in a list of integers input by the user.

#include <iostream>
using namespace std;

int getmax(int num[],int n){
    int max=num[0];
    
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }

    return max;

}

int getmin(int num[],int n){
    int min=num[0];
    
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }

    return min;

}

int main(){

    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    

    int num[size];
    cout<<"Enter the array elements : ";
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"ARRAY : ";
    for(int i=0;i<size ;i++){
        cout<<num[i]<<" ";
    }

    cout<<"\n \nMaximum value in array : "<<getmax(num,size)<<endl;
    cout<<"Minimum value in array : "<<getmin(num,size)<<endl;


    return 0;
}