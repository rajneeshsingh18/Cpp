/*
Q2. Write a program to reverse a given input string word by word.write a function to reverse a word . Then use this function to reverse the input line word by word
If input is :This is the first line 
Output: sight si eht tsrif  enil

*/


// C++ program for the above approach

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
 
string reverseString(string str)
{
 
    
    reverse(str.begin(), str.end());
 
    str.insert(str.end(), ' ');
 
    int n = str.length();
 
    int j = 0;
 
    for (int i = 0; i < n; i++) {

        if (str[i] == ' ') {
            reverse(str.begin() + j,
                    str.begin() + i);
            j = i + 1;
        }
    }

    str.pop_back();
    return str;
}
 

int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
 
    // Function call
    string rev = reverseString(str);
 
    // Print the reversed string
    cout <<"Reveresed string : "<< rev;
    return 0;
}