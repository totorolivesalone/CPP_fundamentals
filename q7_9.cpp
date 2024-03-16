#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ofstream file1;
	cout<<"Begin file "<<endl;
	file1.open("xyz.txt");
	if(!file1)
	{
		cerr<<"File1 didn't open"<<endl;
		exit(100);
	}
	char achar;
	while(cin.get(achar))
	{
		file1.put(achar);
	}
	file1.close();
	int count=1;
	ifstream openfile1;
	openfile1.open("xyz.txt");
	char bchar;
	while(openfile1.get(bchar))
	{
		if(bchar==' ')
		{ count++;}
		}
	
	cout<<"Number of words:"<<count<<endl;
	return 0;}
	
	
	
