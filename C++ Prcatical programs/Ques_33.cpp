/*Q33. Write a program that defines a class employee with the following member: Name , emp_
I’d salary. Write constructor function for the class and a function put data that displays the
data of the employee. Now create an array of employees and input the data for 5 employees
and display that data using the putdata function.
*/

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
class employee{
	private:
		string name;
	    int emp_id;
	    int salary;
	public:
	employee(){
		
	}
	void getdata(){
		int e,s;
		string n;
		cout<<"enter the name = ";
		getline(cin,n);
		cout<<endl;
		cout<<"enter employee id = ";
		cin>>e;
		cout<<endl;
		cout<<"enter salary = ";
		cin>>s;
		cout<<endl;
		
		this->name = n;
		this->emp_id = e;
		this->salary = s;
		}
    void putdata(){
    	cout<<"name = "<<this->name;
    	cout<<"emp_id = "<<this->emp_id;
    	cout<<"salary = "<<this->salary;
      }
	
	};
int main(){
	int r;
	cout<<"Enter the number of employee = ";
	cin>>r;
	employee employees[r];
	
	for(int i=1; i<=r; i++){
		cout<<"Employee = "<<i<<endl;
		getchar();
		employees[i].getdata();
		getchar();
	}
    return 0 ;
}

