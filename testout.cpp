#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	ofstream outfile; //to output something on file
	outfile.open("xyz.txt"); //open file
	string out="Easy";
	outfile<<out; //printing something on file
	outfile.close(); //closing file
	return 0;
}
