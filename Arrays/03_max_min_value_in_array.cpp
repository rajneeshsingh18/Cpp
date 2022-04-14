#include <iostream>
using namespace std;

// function definitaion

int getMax(int num[], int n ){
    int maximum= num[0];


    for(int i=0 ; i<n ; i++){
         
         maximum=max(maximum,num[i]);//predefined function

        // if(num[i]>maximum){
        //     maximum=num[i];
        // }
    }
       //returning max value
    return maximum;
}


int getMin(int num[], int n){
    int min= num[0];
    for(int i=0 ; i<n ; i++){
        
        if(num[i]<min){
            min=num[i];
        }
    }

       //returning min value
       return min;

}

int main(){

    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    
    cout<<"Array : ";
    int num[size];
    
    //Taking input in a arary 
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    
    cout<<"********Array********"<<endl;
     for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
    
    cout<<"\n \nMaximum value in array : "<<getMax(num,size)<<endl;
    cout<<"Minimum value in array : "<<getMin(num,size)<<endl;

    

    return 0;
}