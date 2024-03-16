#include<iostream>
using namespace std;
string prop(int num);
int main()
{
	cout<<"This program lists the properties of a number."<<endl;
	cout<<"Enter a number."<<endl;
	int num;
	cin>>num;
	cout<<prop(num);
	return 0;
}
string prop(int num)
{
	string result;
	if(num>=0)
	{if (num%2==0)
	{result="The number is positive and even.";} //First we will divide numbers into two halfs:postive & negative
	else                                         //Then we will run if else within those two groups for odd-even
	{result="The number is positive and odd.";}  // use of {} for if esle statements make it look neat
}
	else
	{if(num%2==0)
	{result="The number is negative and even.";}// } needs to be placed after semicolon in such statements
	else
	{result="The number is negative and odd.";}
}
	return result;
}
