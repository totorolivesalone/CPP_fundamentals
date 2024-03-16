#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;
class Student{
	public:
		int roll;
		char name[30];
		int standard;
		int year;
		float marks;
		Student(){};
		void getInput()
		{
			cout<<"Enter roll number:";
			cin>>roll;
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter class:";
			cin>>standard;
			cout<<"Enter year:";
			cin>>year;
			cout<<"Enter marks:";
			cin>>marks;
			cout<<"********************"<<endl;
		}
		void setData(fstream& filename,Student s1)
		{
			filename<<s1.roll<<" "<<s1.name<<" "<<s1.standard<<" "<<s1.year<<" "<<s1.marks<<endl;	
				}
		
		
};
int main()
{
	fstream file1;
	file1.open("xyz.txt");
	Student s[5];
	for(int i=0;i<5;i++)
	{
		s[i].getInput();
		s[i].setData(file1,s[i]);
	}
	file1.close();
	fstream file2;
	file2.open("xyz.txt");
	char achar;
	cout<<"***************************"<<endl;
	cout<<"Student database read from file:"<<endl;
	cout<<"Roll number   Name  Class  Year  Marks"<<endl;
	while(file2.get(achar))
	{
		cout.put(achar);
	}
	file2.close();
	return 0;
	
}
