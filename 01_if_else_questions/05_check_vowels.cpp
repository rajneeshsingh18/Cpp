#include <iostream>
using namespace std;

int main(){

    char c;
    int Uppercasevowel , lowercasevowel;

    cout<<"Enter a character from a to z : ";
    cin>>c;

    Uppercasevowel =(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    lowercasevowel =(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' );

    if( Uppercasevowel || lowercasevowel){
        cout<<c<<" is a vowel";
    }

    else{
        cout <<c<< " is a Constant";
    }

    return 0;

}