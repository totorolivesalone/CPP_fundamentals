#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
bool getStu(ifstream& stuFile,int &stuId, int &exam1,int &exam2, int &final)
{
	stuFile>>stuId>>exam1>>exam2>>final;
	if(!stuFile)
	{return false;
	}
	else
	return true;
}
void calcGrade(int exam1,int exam2,int final,int& avrg,char& grade)
{
	avrg=(exam1+exam2+final)/3;
	if(avrg>=90)
	grade='A';
	else if(avrg>=80)
	grade='B';
	else if(avrg>=70)
	grade='C';
	else if(avrg>=60)
	grade='D';
	else
	grade='F'
	return;
}
void writeStu(ofstream &gradeFile,int studId,int avrg,char grade)
{
	gradeFile.fill('0');
	gradeFile<<setw(4)<<studId;
	gradeFile.fill(' ');
	gradeFile<<setw(4)<<avrg;
	gradeFile<<' '<<grade<<endl;
	return;
}
int main()
{
	ifstream stuFile;
	stuFile.open("xyz.txt");
	if(!stuFile)
	{
		cerr<<"Error in opening student file"<<endl;
		exit(100);
		
	}
	ofstream gradesFile;
	gradesFile.open("abc.txt");
	if(!gradesFile)
	{
		cerr<<"Error opening grades file"<<endl;
		exit(100);
	}
	int studId;
	int exam1;
	int exam2;
	int final;
	int avrg;
	char grade;
	while(getStu(stuFile,stuId,exam1,exam2,final))
	{
		calcgrade(exam1,exam2,final,avrg,grade);
		writeStu(gradesFile,stuId,avrg,grade);
	}
	stuFile.close();
	gradesFile.close();
	cout<<"End student grades";
	return 0;
}
