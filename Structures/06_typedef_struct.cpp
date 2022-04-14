#include <iostream>
#include <cstring>

using namespace std;


typedef struct{

    char name[20];
    float height;
    int age;
    int rollno;

}Information;

void printstruct( Information info);


int main(){
    
    Information info1; //without using struct keyword with the help of typedef keyword
    //info1 details
    cout<<"Enter your name : ";
    cin>>info1.name;
    cout<<"Enter your height in ft : ";
    cin>>info1.height;
    cout<<"Enter your Age : ";
    cin>>info1.age;
    cout<<"Enter your College roll no. : ";
    cin>>info1.rollno;

    cout<<"****************Details of first person****************"<<endl;

    printstruct(info1);
    
    return 0;
}

void printstruct( Information info){
    cout<<"Name :  "<<info.name<<endl;
    cout<<"Height "<<info.height<<endl;
    cout<<"Age :  "<<info.age<<endl;
    cout<<"Roll No. : "<<info.rollno<<endl;

}