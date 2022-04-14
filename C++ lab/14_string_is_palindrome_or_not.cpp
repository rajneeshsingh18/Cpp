#include <iostream>
#include <string.h>
using namespace std;

int main(){
    
    // A palindrome is word  which reads the same backward as forward,
    // palindrome word = madam , rotor , level ,ect.
    //not a palindrome = taxi , eduction,etc.

    char string[100];
    cout<<"Enter a string : ";
    cin>>string;

    int start , end,flag=1;

    // start=0;
    end=strlen(string) - 1;


for(int start=0;start<end;start++,end--){
    if(string[start] != string[end]){
            flag=0;
            break;
        }
}

    // while (start<end){
    //     if(string[start] != string[end]){
    //         flag=0;
    //         break;
    //     }
    //     start++;
    //    end--;
    // }

       if(flag){
           cout<<"Yes it is a palindrome string";
       }
       else{
           cout<<"No, it is not a palindrome string"; }


    return 0;
}