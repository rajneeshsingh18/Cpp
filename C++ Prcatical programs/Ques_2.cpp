/* Ques_2 Print the particular given pattern. fon n=5
         $$$$$
         $$
         $$
         $$
         $$$$$ 
*/
#include <iostream>
using namespace std ;

int main(){
    
    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    if(n<0){
        cout<<"Enter a positive number";
    }

    else
        for( int row=1;row<=n;row++){
            if(row==1 || row==n){
                for( int col=1;col<=n;col++){
                    cout<<"$";
                }
                cout<<endl;
            }
            else{
                cout<<"$$"<<endl;
            }
        }
    return 0;

}