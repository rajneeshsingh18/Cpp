#include <iostream>
using namespace std;

void printarray(int arr[],int size){
    cout<<"*************** Printing an array ******************"<<endl; 
     for ( int i=0 ; i<size;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;

     cout<<"************* Array printed successfully ***********"<<endl;

}

int main(){
        
    //Declaraing a array
    int Friend[12];

    //Accessing An array 
    cout<<"Value at 11 index : "<<Friend[10]<<endl; //Give garbage value

    cout<<"Value at 16 index : "<<Friend[15]<<endl;//Give garbage value 

    //Intialising an array 
    int car[6]={5,26,7,4,6};
    
    //Accessing an element from array
     cout<<"Value at index 2 : "<<car[1]<<endl;

     //Printing a array
     cout<<"Printing an array "<<endl; 
     for ( int i=0 ; i<6;i++){
         cout<<car[i]<<" ";
     }
    

    cout<<endl;
    //intializing all location  with 0
     int array[10]={0};
       cout<<"Printing an array "<<endl; 
     for ( int i=0 ; i<10;i++){
         cout<<array[i]<<" ";
     }
     cout<<endl;

     //printing array with function;
     int dost[6]={1};
     printarray(dost,6);

     cout<<"Size of dost array is : "<<sizeof(dost)/sizeof(int)<<endl;

     //code for intiazlising the array with any required value 
     int mast[6];
     fill_n(mast,6,7);//by this code all the value of the array will get initialized by 7
     printarray(mast,6);


     // character arary
    
    cout<<"Printing char array : ";
     char ch[8]={'R','a','j','n','e','e','s','h'};
     for(int i=0;i<8;i++){
         cout<<ch[i]<<" ";
     }

     cout<<endl;
     


     //Decalaring array

    //  double balance[10]; // datatype arrayname[arraysize];
     double balance[5]={23,45.3,34.3,563.5,45.4};

     //printing a array 
     cout<<"******Printing balance array********"<<endl;
     for(int i=0 ;i<5;i++){
         cout<<balance[i]<<" ";
     }

     //changing array element or assinging different value
     balance[3]=3.4;

     cout<<endl; 

     //accessing array elements 
    cout<<"The value at balance[3] is : "<<balance[3]<<endl;


     double firstdoublearray[5];
     float firstfloatarray[6];
     bool firstboolarray[4];

    return 0;
}