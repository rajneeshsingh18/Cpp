//Ques_16. WAP to revesre an array of n integers in place
#include <iostream>
using namespace std;
int main()
{
        int n;
        cout<<"Enter the size of array : ";
        cin>>n;

        int a[n];
        cout<<"\nEnter array elements : ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        cout<<"\nOriginal Array : ";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

        int start=0,end=n-1;
        while(start<end)
        {
           swap(a[start],a[end]);
           start++;
           end--;
        }

        cout<<"\nReversed Array : ";
        for(int i=0;i<n;i++)
        {
          cout<<a[i]<<" ";
        }
        cout<<endl;

        return 0;  
}