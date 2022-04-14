#include <iostream>
using namespace std;

int main(){

    //Two dimensional array 

    int a[4][2]={{1,2},
                {2,4},
                {3,6},
                {4,8}};
     
    for(int i=0;i<4;i++) //rows
        for(int j=0;j<2;j++){  //columns
            cout<<"a["<<i<<"]["<<j<< "] = ";
            cout<<a[i][j]<<endl;
        }

    //an two D array with 2 rows and 3 columns.
    int two_d[2][3];
    
    //taking 2d array elements input fromm the user 
    cout<<"Enter the 2 * 3 = 6 elements : ";
   for( int i=0;i<2;i++) // row 
       for( int j=0 ; j<3 ; j++){ //columns
           cin>>a[i][j];
       }

     //Output each array elements value 
    for( int i=0;i<2;i++) // row 
       for( int j=0 ; j<3 ; j++){ //column
           cout<<" Element at index a["<<i<<"]["<<j<<"] = ";
           cout<<a[i][j]<<endl;
       }



    return 0;
}