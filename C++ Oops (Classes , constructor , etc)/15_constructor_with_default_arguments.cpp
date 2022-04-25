#include <iostream>
using namespace std;

class Simpledata{
    int num1;
    int num2;
    int num3;

    public:

            Simpledata(void){
                num1=num2=num3=0;
            }

            Simpledata(int a , int b=43,int c=3){
                num1=a;
                num2=b;
                num3=c;
            }


            void printdata(void){
                cout<<"\nThe value of num1 : "<<num1;
                cout<<"\nThe value of num2 : "<<num2;
                cout<<"\nThe value of num3 : "<<num3;

            }

};

int main(){

    Simpledata s1;
    s1.printdata();

    Simpledata s2(27);
    s2.printdata();

    Simpledata s3(8,2,9);
    s3.printdata();


    return 0;
}