# include <iostream>
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
			getchar();
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
		}
		~person(){
			
		}
};

class teacher : public person{
	private:
		string department;
		int salary;
	
	public:
		void getdata(){
			person :: getdata();
			string d;
			int s;
			cout<<"Enter the department = ";
			getchar();
			getline(cin,d);
			cout<<endl;
			cout<<"Enter the salary = ";
			cin>>s;
			cout<<endl;
			
			this->department=d;
			this->salary=s;
		}
		
		void disdata(){
			person :: disdata();
			cout<<"department = "<<department<<endl;
			cout<<"salary = "<<salary<<endl;
			cout<<endl;
		}
		
		
		
};
class student : public person{
	private :
		int marks[5];
	
	public:
	void getdata(){
		int m;
		person :: getdata();
		for (int i=1;i<=5;i++){
			cout<<"enter the marks in subject "<<i<<" = ";
			cin>>marks[i];
		}
	}
	void disdata(){
		person :: disdata();
		for (int i=1;i<=5;i++){
			cout<<endl;
			cout<<"enter the marks in subject"<<i<<" = "<<marks[i];
			cout<<endl;
		}
	}
};
int main(){
	
    teacher t1;
    cout << "Enter details of teacher ";
    t1.getdata();
    t1.disdata();
    student s1;
    cout<<"enter the details of student";
    s1.getdata();
    s1.disdata();
}
