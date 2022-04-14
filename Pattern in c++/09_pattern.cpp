#include <iostream>
using namespace std;

// A A A
// B B B
// C C C
int main(){
      

      int n;
      cout<<"Enter the value of n ";
      cin>>n;

    //   int row=1;
    //   while(row<=n){
    //       int col=1;
          
    //       while (col<=n)
    //       {   char ch='A' + row- 1;
    //           cout<<ch<<" ";
    //           col++;
    //       }
    //       cout<<endl;
    //       row++;
    //   }


      //A B C
      //A B C
      //A B C
     
     for( int row=1;row<=n;row++){
         for(int col=1;col<=n;col++){
             char ch= 'A'+col-1;
             cout<<ch<<" ";

         }
         cout<<endl;
     }

    return 0;
}