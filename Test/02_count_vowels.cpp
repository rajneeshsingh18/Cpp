#include<iostream>
#include<string.h>

using namespace std;

int main(){

       char str[100];
       int vowels = 0;

    cout<<"Enter a string : ";
    cin>>str;
   
    
    for(int i = 0; str[i]; i++)  {

        if(  str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'

        || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ){
		    vowels++;
        }
    }
    
    cout << "Total Vowels : " << vowels;
    
    return 0;
}