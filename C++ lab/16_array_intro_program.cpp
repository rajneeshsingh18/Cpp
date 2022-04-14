#include <iostream>
using namespace std;

int main(){


    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int i ,Array[n];
    

    for(int i =1;i<=n;i++){
       cin>>Array[i];
    }
     
     cout<<"Odd number between 1 to " <<n<<" is : ";
     int count=0;
     for(int i =1;i<=n;i++){
         
         if(Array[i]%2!=0){
             count++;
              cout<<Array[i]<<" ";
    }
   
    }

    return 0;
}