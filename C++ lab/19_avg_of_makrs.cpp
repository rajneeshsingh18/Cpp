#include <iostream>
using namespace std;

//function declaration
double Marksavg( int ArrayofMarks[], int n);

int main(){
    
    int n;
    cout<<"Enter the value of n or size of array:";
    cin>>n;
    int ArrayofMarks[n];
     
     cout<<"Enter marks of students : ";
    for(int i =1;i<=n;i++){
       cin>>ArrayofMarks[i];
    }

    cout<<"Marks entered by you is " <<n<<" is : "<<endl;
     for(int i =1;i<=n;i++){
        cout<<ArrayofMarks[i]<<" "<<"\n";
        }


     //calling a function
    double avg= Marksavg(ArrayofMarks,n);
    cout<<"Average of marks : "<<avg<<endl;

    return 0;
}

//marksavg() function definition

double Marksavg( int ArrayofMarks[], int n){
    double avg;
    int sum=0;

    for(int i=1 ; i<=n;i++){
        sum += ArrayofMarks[i];
        }

    avg=double(sum)/n;

    return avg;
}