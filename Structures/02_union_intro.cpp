#include <iostream>
using namespace std;

union  money
{
    int rice;
    char car;
    float pounds;

};


int main(){

    union money m1;
    m1.rice=34;
    m1.pounds=3.4;
    m1.car='R';
    cout<<m1.rice<<endl; //gives garbage value as union
    cout<<m1.pounds<<endl; //gives unexpected value
    cout<<m1.car<<endl;



    return 0;
}