#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Student
{
	public:
		int roll;
		string name;
		int classname;
		int year;
		float totalmarks;
		void input()
		{
			ofstream file;
			file.open("xyz.txt",ios::app);
			Student s1;
			cout<<"Enter roll number:";
			cin>>s1.roll;
			cout<<"Enter name:";
			cin>>s1.name;
			getline(cin,name);
			cout<<"Enter class:";
			cin>>s1.classname;
			cout<<"Enter year:";
			cin>>s1.year;
			cout<<"Enter total marks:";
			cin>>s1.totalmarks;
			cout<<"**************************"<<endl;
			file.write((char*)&s1,sizeof(s1));
			file.close();
			
		}
	};
	int main()
	{
		Student s2;
		s2.input();
		return 0;
	}

