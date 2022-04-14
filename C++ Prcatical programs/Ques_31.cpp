#include <iostream>
#include <cmath>

using namespace std;
class Complex{
	private:
		int real;
		int imag;
	
	public:
	Complex(){
		
	}
	Complex(int r ,int i){
		this->real=r;
		this->imag=i;
	}
	Complex(int a){
		this->real=a;
		this->imag=a;
	}
	void display(){
		if (imag > 0){
			cout<<real<<"+"<<" i "<<imag;
		}
		else {
			cout<<real<<"-"<<" i "<<imag;
		}
	
	}	
	
	Complex add(Complex c1){
		Complex result;
		result.real=this->real+c1.real;
		result.imag=this->imag+c1.real;
		return result;
	}
	
	void add(Complex c1,Complex c2){
		this->real=c1.real+c2.real;
		this->imag=c2.imag+c2.imag;
	}
};
int main(){
	int a,b,c,d;
	a=2;
	b=4;
	c=6;
	Complex c1(a,b);
	Complex c2(c);
	Complex c3;
	Complex c4;
	c3=c1.add(c2);
	cout<<"result after using 1 st function = ";
	c3.display();
	cout<<endl;
	c4.add(c1,c2);
	cout<<"result after using 2 nd function = ";
	c3.display();
}
