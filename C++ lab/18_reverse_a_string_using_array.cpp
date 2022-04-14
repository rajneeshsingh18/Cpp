#include <iostream>
using namespace std;

//function prototype or declaration

int getLenght( char string[]);

void reverse(char string[] , int n);



int main(){
              
    char string[20];
    cout<<"Enter a string : ";
    cin>>string;
    
    //calling a function
    int len=getLenght(string);
    // cout<<"Lenght of a string is : "<<len<<endl;
 
    reverse(string,len);
      
    cout<<"Reverse string is : "<<string;

    return 0 ;     

}

//reverse() function definition
void reverse(char string[20] , int n ){
    int start=0;
    int end=n-1;

    while(start<end){
        swap(string[start++], string[end--]);
    }
}

//length of a string function definition
int getLenght( char string[]){
    int count=0;
    for(int i=0 ; string[i] != '\0' ;i++){
        count++;
    }
    return count;
}