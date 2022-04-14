#include <iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter a charater : ";
    cin>>ch;

    if (ch>='A'  && ch<='Z'){
        cout<<"This Uppercase"<< endl;
    }

    else if( ch>='a' && ch <= 'z'){
        cout<<"This is lowercase" <<endl;
    }

    else{
        cout<<"This is numeric or special character";
    }

    return 0;
}