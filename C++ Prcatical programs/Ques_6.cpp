#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    float a,b,c;
    float x1,x2,d,real,imag;

    cout<<"Quadratic Equation : ax^2 + bx + c"<<endl;

    cout<<"Enter coefficient of a : ";
    cin>>a;
    cout<<"Enter coefficient of b : ";
    cin>>b;
    cout<<"Enter coefficient of c : ";
    cin>>c;

    d=b*b-4*a*c; //d-->Discriminant

    if(d>0)
    {
    cout<<"Roots are real and different";
    x1=(-b + sqrt(d)) / (2*a);
    x2=(-b - sqrt(d)) / (2*a);
    cout<<" \n x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;
    }

    else if(d==0)
    {
    cout<<"Roots are real and same";
    x1=(-b + sqrt(d)) / (2*a);
    cout<<"\n x1 = "<<x1;
    cout<<"\n x2 = "<<x1;
    }

    else
    {
    cout<<"Roots are complex and distinct";
    real = -b/(2*a);
    imag = sqrt(-d) / (2*a);
    cout<<"\nx1 = "<<real<<"+"<<imag<<"i";
    cout<<"\nx2 = "<<real<<"-"<<imag<<"i";
    }

  return 0;
}