/*
Q1. Create a class: Person with member variables: name and age. Create two overloaded
constructors for this class along with a copy constructor. Also create a destructor. Include member function, get_data(), to get the name and age of the person. Define a member function, display_data() to display the member variables. Define objects for this class and showcase the
use of each of these functions.

*/

#include <iostream>
#include <cstring>

using namespace std;

class person{
	private:
		string name;
		int age;
		
	public:
		person(){
			
		}
		person(string n,int a){
			this->name=n;
			this->age=a;
		}
		void getdata(){
			string n;
			int a;
			cout<<endl;
			cout<<"Enter the name = ";
			getline(cin,n);
			cout<<endl;
			cout<<"Enter the age = ";
			cin>>a;
			cout<<endl;
			
			this->name=n;
			this->age=a;
			
		}
		void disdata(){
			cout<<endl;
			cout<<"name = "<<name<<endl;
			cout<<"age = "<<age<<endl;
			cout<<endl;
		}
		~person(){
			
		}
};
int main(){
	
	person p1;
	p1.getdata();
	person p2("nara",24);
	cout<<"displaying the data";
	p1.disdata();
	p2.disdata();
	
}