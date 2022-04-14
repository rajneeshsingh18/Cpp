/* Ques12. WAP that generates grade based on percentage
● If marks >= 90% then grade = “O”
● If marks >= 75% and marks < 90% then grade = “A”
● If marks >= 60% and marks < 75% then grade = “B”
● If marks >= 40% and marks < 60% then grade = “C”
● Else grade = “F”
Use if-else construct. Input percentage of marks from user. The program should be running as
long as user answers ‘y’ or ‘Y’
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int percentage;
    char choice;

    do{
        cout<<"Enter your percentage : ";
        cin>>percentage;

        cout<<"\nPercentage entered by you: "<<percentage<<endl;
        
        if(percentage<0 || percentage>100){
            cout<<"Wrong data !";
        }
        else if (percentage >= 90){
            cout<<"Grade obtained : O .";
        }
        else if( percentage >= 75 && percentage <90){
            cout<<"Grade obtained : A .";
        }
        else if( percentage >= 60 && percentage <75){
            cout<<"Grade obtained : B .";
        }
        else if( percentage >= 40 && percentage <60){
            cout<<"Grade obtained : C .";
        }
        else{
            cout<<"Grade obtained : F .";
            }

        cout<<"\n\n";

        cout<<"\nDo you want to continue ..."<<endl;
        cin>>choice;

        getch();
    }while(choice == 'Y' || choice == 'y');
    return 0;
}