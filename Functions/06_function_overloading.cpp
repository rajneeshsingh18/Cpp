#include <iostream>
using namespace std;

int sum(int a , int b){
    int sum;
    sum=a+b;
    return sum;
}

int sum(int a , int b , int c){
    int sum;
    sum=a+b+c;
    return sum;
}

int volume(int r, int h){
    int volume;
    volume=3.14*r*r*h;
    return volume;
}

int volume(int l, int b ,int h){
    int volume;
    volume=l*b*h;
    return volume;
}

int volume(int s){
    int volume;
    volume=s*s*s;
    return volume;
}
int main(){
     
     cout<<"sum of 2 argumnent function : "<<sum(3,5)<<endl;
     cout<<"sum of 3 argumnent function : "<<sum(8,5,2)<<endl;

     cout<<"Volumes of cylinder : "<<volume(2,3)<<endl;
     cout<<"Volumes of cuboid : "<<volume(3,4,2)<<endl;
     cout<<" Volume of cube : "<<volume(3)<<endl;

    return 0;
}