/*
Q29. Write a program that defines a struct point which has the X and the Y coordinates as the 2
members. Now write a function that finds the distance between the origin and these 2 points.
The function should return the point closer to the origin.

*/

#include <iostream>
#include <cmath>
 
using namespace std;

struct Point{
	int x;
	int y;
};

float distance(Point p){
	float r=pow(p.x,2)+pow(p.y,2);
	float dis=sqrt(r);
	return dis;
}
Point cpoint(Point p1,Point p2){
	float d1,d2;
	d1=distance(p1);
	d2=distance(p2);
	if(d1<d2){
		return p1;
	}
	else
	{
		return p2;
	}
}
int main(){
	Point p1,p2,closep;
	
	cout<<"enter the X of point 1 = ";
	cin>>p1.x;
	cout<<"enter the Y of point 1 = ";
	cin>>p1.y;
	cout<<"enter the X of point 2 = ";
	cin>>p2.x;
	cout<<"enter the Y of point 2 = ";
	cin>>p2.y;
	closep=cpoint(p1,p2);
	cout<<endl;
	cout<<"closest point from origin is : "<<"("<<closep.x<<","<<closep.y<<")";
}