#include<iostream>
#include<string>
#include<fstream> //header file for fstream for input output file stream
using namespace std;
int main()
{
	ifstream ftest; //ifstream is to read from a file
	ftest.open("xyz.txt"); //opens file named xyz of txt type 
	if(ftest.fail()) //helps to check if file didn't open , fail() function
	{
		cerr<<"Error opening file"<<endl; //cout for errors
		exit(1); //error type
	}
	string inp;
	ftest>>inp; //cin>>inp type for file. It takes input from file
	cout<<inp;
	ftest.close(); //closes file
	return 0;
}
