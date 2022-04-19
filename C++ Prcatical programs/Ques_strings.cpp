/*
Q1. Write a function to read an input string and remove all occurrences of
           a . A single char
           b. . A given string from the input string.

*/

#include <iostream>
#include <cstring>

using namespace std;


int main(){
	string str,s;
	cout<<"Enter the string : ";
    getline(cin,str);
    cout<<"Enter the string or character do you want to remove : ";
    getline(cin,s);
    
    int a=str.find(s);
    int b=s.length();
    while(a!=-1){
    	str.erase(a,b);
    	a=str.find(s);
	}
    cout<<"after removing = "<<str;
}