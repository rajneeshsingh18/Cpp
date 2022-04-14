#include <iostream>
using namespace std;

//   A B C
//   B C D
//   C D E

int main(){
      
      int n;
      cout<<"Enter the value of n ";
      cin>>n;

    //   for(int row=1;row<=n;row++){
    //       for(int col=1;col<=n;col++){
    //         //   char ch='A'+row+col-2;
    //           cout<<ch<<" ";
               
    //       }
    //       cout<<endl;
    //   }



    for(int row=1;row<=n;row++){
          for(int col=1;col<=n;col++){
              char start='A'+n-row;
              cout<<start<<" ";
              start++;
               
          }
          cout<<endl;
      }
    return 0;
}