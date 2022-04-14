#include <iostream>
using namespace std;

int main(){
    

    enum Cars{Honda, BMW , Hero};

    Cars c1=Honda;
    Cars c2=BMW; 
    Cars c3=Hero; 

    cout<<"The index value of c1 is : " <<c1<<endl;
    cout<<"The index value of c2 is : " <<c2<<endl;
    cout<<"The index value of c3 is : " <<c3<<endl;

    cout<<"This is False , expected ans. is 0 : "<< (c1==2)<<endl; //gives false 
    cout<<"This is True , expected ans. is 1 : "<< (c1==0)<<endl;  // gives true



    return 0;
}