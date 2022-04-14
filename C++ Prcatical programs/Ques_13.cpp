//Ques13.  WAP to find out the average of the array elements.
#include <iostream>
using namespace std;

//function definition for printing a array.
void printarray(int arr[],int size){
    cout<<"Array : ";
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}

//function for calculating avg 
double avg_of_array( int array[], int size){
    double avg;
    int sum=0;

    for(int i=1 ; i<=size;i++){
        sum += array[i];
        }

    avg=double(sum)/size;

    return avg;
}

int main(){

    int size ;
    cout<<"Enter the size of array : ";
    cin>>size;

    int array[size];
    cout<<"Enter the array elements : ";
    for(int i=1 ;i<=size;i++){
        cin>>array[i];
    }
    
    //calling function
    printarray(array,size);
    cout<<"\n";

    double average=avg_of_array(array,size);
    cout<<"Average of array elements :"<<average<<endl;
    return 0;
}