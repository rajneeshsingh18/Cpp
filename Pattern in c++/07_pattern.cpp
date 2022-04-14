#include <iostream>
using namespace std;

// 1 
// 2 3
// 3 4 5
// 4 5 6 7
int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    // int row=1;
    
    // while(row<=n){

    //     int col=1;
    //     int value=row;
        
    //     while(col<=row){
    //         cout<<value<<" ";
    //         value++;
    //           col++;
    //     }
    //     cout<<endl;
    //   row++;
    // }



//   Cout << row + column -1 ;
// Row from 1 to n 
// Column from 1 to row


for(int row=1;row<=n;row++){

  for(int col=1;col<=row;col++){
    cout<<row+col-1<<" ";

  }
  cout<<endl;
}




    return 0;
}