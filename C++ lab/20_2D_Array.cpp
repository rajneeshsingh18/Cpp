#include<iostream>
using namespace std;
int main()
{
    int row, col,  arr[10][10];

    cout<<"Enter the Row and Column Size for Array: ";
    cin>>row>>col;

    cout<<"Enter "<<row*col<<" Array Elements: ";
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++)
            cin>>arr[i][j];
    }
   
    cout<<"The Array is:"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }

    cout<<"Array Elements with its Index:\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++)
            cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<"  ";
        cout<<endl;
    }

    cout<<endl;
    return 0;
}