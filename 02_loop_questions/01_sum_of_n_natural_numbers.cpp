#include <iostream>
using namespace std;

int main(){
      
    int n;
    cout<<"Enter a n natural number : ";
    cin>>n;

    int i=1; //ginti hamesa 1 sai start honi chahiye
    int sum=0;

    while(i<=n){
        sum=sum+i;
        i=i+1;
    }

    cout<<"Value of sum is "<<sum<<endl;
    return 0;
}