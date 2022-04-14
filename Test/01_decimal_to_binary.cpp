#include <iostream>
using namespace std;
 
// function to convert decimal to binary
void decToBinary(int n)
{

    int binaryNum[32],count=0;
 
    int i = 0;
    while (n > 0) {
 
        //  remainder 
        binaryNum[i] = n % 2;
        if (binaryNum[i]==1){
        	 count++;
		}
        n = n / 2;
        i++;
    }
    
    cout<<"Binary conversion : ";
    for (int j = i - 1; j >= 0; j--)
        cout <<  binaryNum[j];
        cout<<endl;
        cout <<"count of one is "<< count;
}
 
int main()
{
    int n ;
    cout<<"Enter a decimal number : ";
    cin>>n;

    //calling function
    decToBinary(n);
    return 0;
}