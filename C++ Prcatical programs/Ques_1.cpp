// Ques_1. Print right triangle pattern.

#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the value of n : ";
  cin>>n;

  if(n<0){
      cout<<"Enter a positive number";
  }
  
  else 
  
  for(int row=1 ; row <= n ; row++){
    //for every row run the column
    for(int col=1 ; col<=row ; col++){
      cout<<"*"<<" ";
    }
    //when row is printed we need to add a newline.
    cout<<endl;
  }

  return 0 ;
}