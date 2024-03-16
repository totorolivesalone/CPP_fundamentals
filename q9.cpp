#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Person
{
	protected:
	string name;
	public:
		Person(string n)
		{
			name=n;
		}
	virtual void display() //virtual function for function over-riding
	{
		cout<<"Name:"<<name;
		}	
};
class Student:public Person
{
	private:
		string course;
		int marks;
		int year;
		public:
			Student(string n);
			void getInput()
			{
			cout<<"Enter course:";
			getline(cin,course);
			cout<<"Enter marks:";
			cin>>marks;
			cout<<"Enter year:";
			cin>>year;
			}
			void display()
			{
				cout<<"******************Student_Database*********************"<<endl;
				cout<<"Name:"<<name<<endl;
				cout<<"Course:"<<course<<endl;
				cout<<"Marks:"<<marks<<endl;
				cout<<"Year:"<<year<<endl;
				cout<<"********************************************************"<<endl;
			}
		
};
Student::Student(string n):Person(n)
{
}
class Employee:public Person
{
	private:
		string department;
		float salary;
		public:
			Employee(string n);
		void getInput()
		{
			cout<<"Enter department name:";
			getline(cin,department);
			cout<<"Enter monthly salary:";
			cin>>salary;
			}
			void display()
			{
				cout<<"***************Employee_Database*********************"<<endl;
				cout<<"Name:"<<name<<endl;
				cout<<"Department:"<<department<<endl;
				cout<<"Salary:Rs."<<salary<<endl;
				cout<<"******************************************************"<<endl;
				}	
				
};
Employee::Employee(string n):Person(n)
{
}
int main()
{
	cout<<"This program is Database for Students and Employees"<<endl;
	string name1;
	cout<<"This is student database:"<<endl;
	cout<<"Enter name of student:";
	getline(cin,name1); //getline(cin,variable) for getting string with space
	Person *ptr1; //pointer created of Base class
	Person *ptr2;
	Student s1(name1); //object of derived class student 1
	ptr1=&s1; //pointer pointing to object of derived class
	s1.getInput();
	ptr1->display(); //base function overriden with Derived member function
	string name2;
	cout<<"This is employee database:"<<endl;
	cin.ignore(); //to prevent getline errors
	cout<<"Enter name of employee:";
	getline(cin,name2);
	Employee p1(name2);
	ptr2=&p1;
	p1.getInput();
	ptr2->display();
	return 0;
	
}
