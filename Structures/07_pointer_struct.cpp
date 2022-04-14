#include <iostream>
using namespace std;

struct Lenght{

    int meters;
    int centimetres;
};

int main(){

    Lenght *ptr,l;

    ptr=&l;

    cout<<"Enter the value of meters : ";
    cin>>(*ptr).meters;

    cout<<"Enter the value of centimeters : ";
    cin>>(*ptr).centimetres;

    cout<<"Lenght "<<(*ptr).centimetres<<"cm and Lenght "<<(*ptr).meters<<"m";
    return 0;
}