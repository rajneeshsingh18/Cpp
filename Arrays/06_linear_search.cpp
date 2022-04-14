#include <iostream>
using namespace std;

bool search( int arr[], int size , int key){

    for(int i=0;i<size;i++){
        
        if(arr[i]==key){
            return 1;
        }
    }

    return 0;
}

int main(){
    
    int arr[10]={2,1,-5,6,4,8,10,12,15,11};
    
    cout<<"Enter the element to search for : ";

    int key;
    cin>>key;

    bool found=search(arr,10,key);

    if(found){
        cout<<"kEY is present ";
    }
    else{
        cout<<"Key is absent";
    }

    return 0;
}