#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	cout<<"Test control variables"<<endl;
	cout<<"Print with default variables:";
	cout<<'a'<<'B'<<'c'<<endl;
	cout<<"Test fill characted with *"<<endl;
	cout.width(5);cout.fill('*'); //cout.width() sets width and cout.fill('*') fills if space is empty
	cout<<'a'<<endl;
	cout<<"Default floating number"<<endl;
	cout<<12.34567<<endl;
	cout<<"Test with precision upto 3 decimal points"<<endl;
	cout.precision(4);//cout.prcision()prints 4 digits only in following statements;
	cout<<12.34567<<endl;
	cout<<12.34567;
	return 0;
}
