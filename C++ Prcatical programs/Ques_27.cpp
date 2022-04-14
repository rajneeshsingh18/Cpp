/*
Q27. Create a four function calculator for fractions. The formulas for the four arithmatic
operations are:
● a/b + c/d = (a*d + b*c) / (b*d)
● a/b - c/d = (a*d - b*c) / (b*d)
● a/b * c/d = (a*c) / (b*d)
● a/b / c/d = (a*d) / (b*c)

Each fraction should be stored internally as a variable of type struct with both num and den as
integers. Your result should show the fraction in lowest terms. (use HCF function). The Program
should show a menu and ask user for options.
● Add 2 Fractions
● Substract
● Multiply
● Divide
The user should type the first fraction, an operator, and a second fraction. The program should
then display the result and ask whether the user wants to continue. For eg = ½ + ¾ = 5/4.


*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
 
using namespace std;

struct Fraction{
	int num;
	int dem;
};

Fraction addfrac(Fraction f1,Fraction f2 ){
	Fraction temp,result;
	int d;
	temp.num=(f1.num * f2.dem  + f1.dem * f2.num);
	temp.dem=(f1.dem * f2.dem);
	d=__gcd(temp.num,temp.dem);
	if (d<0){
	result.dem=temp.dem/d*-(-1);
	result.num=temp.num/d*-(-1);
	return result;
	}
	else {
		result.dem=temp.dem/d*-(-1);
	result.num=temp.num/d*-(-1);
	return result;
	}
}
Fraction subfrac(Fraction f1,Fraction f2 ){
	Fraction temp,result;
	int d;
	temp.num=(f1.num * f2.dem  - f1.dem * f2.num);
	temp.dem=(f1.dem * f2.dem);
	d=__gcd(temp.dem,temp.num);
	if (d<0){
	result.dem=temp.dem/d*-1;
	result.num=temp.num/d*-1;
	return result;
	}
	else {
		result.dem=temp.dem/d*-1;
	result.num=temp.num/d*-1;
	return result;
	}
	
}
Fraction mulfrac(Fraction f1,Fraction f2 ){
	Fraction temp,result;
	int d;
	temp.num=(f1.num * f2.num);
	temp.dem=(f1.dem * f2.dem);
	d=__gcd(temp.num,temp.dem);
	if (d<0){
	result.dem=temp.dem/d*-1;
	result.num=temp.num/d*-1;
	return result;
	}
	else {
		result.dem=temp.dem/d*-1;
	result.num=temp.num/d*-1;
	return result;
	}
}
	
Fraction divfrac(Fraction f1,Fraction f2 ){
	Fraction temp,result;
	int d;
	temp.num=(f1.num * f2.dem );
	temp.dem=(f1.dem * f2.num);
	d=__gcd(temp.num,temp.dem);
	if (d<0){
	result.dem=temp.dem/d*-1;
	result.num=temp.num/d*-1;
	return result;
	}
	else {
		result.dem=temp.dem/d*-1;
	result.num=temp.num/d*-1;
	return result;
	}
}


int main(){
	Fraction f1,f2,result;
	int num,dem,op;
	do{
		cout<<"***************** M-E-N-U **********************"<<endl;
		cout<<"1. for addition of two fraction"<<endl;
		cout<<"2. for subtraction of two fraction"<<endl;
		cout<<"3. for multiplication of two fraction"<<endl;
		cout<<"4. for division of two fraction"<<endl;
		cout<<"0.  For EXIT "<<endl;
		cout<<endl;
		cout<<"enter your option = ";
		cin>>op;
		if (op>0 && op<5){
			cout<<"Enter the numerator of 1st fraction = ";
			cin>>f1.num;
			cout<<"Enter the denominator of 1st fraction = ";
			cin>>f1.dem;
			cout<<"Enter the numerator of 1st fraction = ";
			cin>>f2.num;
			cout<<"Enter the denominator of 1st fraction = ";
			cin>>f2.dem;
		}
		if (f1.dem!=0 && f2.dem!=0)
		{
			switch (op){
			case 1 : {
				 result=addfrac(f1,f2);
				 cout<<endl;
				 cout<<"Fractin 1 = "<<f1.num<<"/"<<f1.dem<<endl;
				 cout<<"Fractin 2 = "<<f2.num<<"/"<<f2.dem<<endl;
				 cout<<"addition of two fractions are = "<<result.num<<"/"<<result.dem<<endl;
				 cout<<endl;
				break;
			}
			case 2 : {
				 result=subfrac(f1,f2);
				 cout<<endl;
				 cout<<"Fractin 1 = "<<f1.num<<"/"<<f1.dem<<endl;
				 cout<<"Fractin 2 = "<<f2.num<<"/"<<f2.dem<<endl;
				 cout<<"subtraction of two fractions are = "<<result.num<<"/"<<result.dem<<endl;
				 cout<<endl;
				break;
			}
			case 3 : {
				 result=mulfrac(f1,f2);
				 cout<<endl;
				 cout<<"Fractin 1 = "<<f1.num<<"/"<<f1.dem<<endl;
				 cout<<"Fractin 2 = "<<f2.num<<"/"<<f2.dem<<endl;
				 cout<<"multiplication of two fractions are = "<<result.num<<"/"<<result.dem<<endl;
				 cout<<endl;
				break;
			}
			case 4 : {
				 result=divfrac(f1,f2);
				 cout<<endl;
				 cout<<"Fractin 1 = "<<f1.num<<"/"<<f1.dem<<endl;
				 cout<<"Fractin 2 = "<<f2.num<<"/"<<f2.dem<<endl;
				 cout<<"division of two fractions are = "<<result.num<<"/"<<result.dem<<endl;
				 cout<<endl;
				break;
			}
			case 0 : {
				cout<<"++++++++++E-X-I-T+++++++++++";
				break;
			}
		}
		}
		else {
			cout<<"***************"<<endl;
			cout<<"Enter the correct value of doing calculation"<<endl;
			cout<<"***************"<<endl;
		}
		
	getchar();
	getchar();
	system("cls");
	}
	while (op != 0);
	}
