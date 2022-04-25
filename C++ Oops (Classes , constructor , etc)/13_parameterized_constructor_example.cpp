#include <iostream>
#include <math.h>
using namespace std;

class Point{
    int x , y;
    public:

    friend void distancepoint(Point  , Point );

    Point ( int a , int b){
        x=a;
        y=b;
    }

    void displaypoint(){
        cout<<"The point is ( "<< x<<" ,"<<y<<" )"<<endl;
    }

};

void distancepoint(Point obj1 , Point obj2){
    double dis;

    dis=sqrt(pow((obj2.x-obj1.x),2)+pow((obj2.y-obj1.y),2));

    cout<<"Distance between two point is : "<<dis;
}

int main(){

    Point p(1,0);
    p.displaypoint();

    Point q(70,0);
    q.displaypoint();

    distancepoint(p,q);



    return 0;
}