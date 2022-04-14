#include <iostream>
using namespace std;

//Sum of all even numbers between 1 to n

int main(){
    
    int n;
    cout<<"Enter n natual number :";
    cin>>n;

    int i=2,sum=0;

    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    
    cout<<"Sum of all even numbers b/w 1 to "<<n<<" is "<<sum<<endl;

    return 0;
}