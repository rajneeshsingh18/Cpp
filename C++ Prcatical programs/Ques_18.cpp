//Ques.18 WAP to read a m*n matrix and print it .

#include <iostream>
using namespace std;

int main(){

    int n , m;
    cout<<"Enter the no. of rows : ";
    cin>>n;
    cout<<"Enter the no. of cols : ";
    cin>>m;

    int matrix[n][m];

    if( n<=0 || n<=0){
        cout<<"Enter a positive or non-zero dimensions . ";
    }

    else{
        cout<<"Enter matrix elements : "<<endl;
        for(int i=0;i<n;i++){  //rows
            for(int j=0 ; j<n ; j++){ //columns
            cin>>matrix[i][j];

            }
        }

        cout<<"\nMatrix: "<<endl;

        for(int i=0 ; i<n;i++){
            for(int j=0 ; j<n ; j++){
                cout<<matrix[i][j]<<"\t";
            }
            cout<<endl;
        }



    }
    return 0;
}