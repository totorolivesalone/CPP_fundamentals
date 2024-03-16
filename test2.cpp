#include<iostream>
using namespace std;
int evenOdd(int x);
int main()
{
	cout<<"This program compares two numbers."<<endl;
	cout<<"Enter a number."<<endl;
	int x;
	cin>>x;
	cout<<evenOdd(x);
	return 0;
}
int evenOdd(int x)
{
	if(x%2==0)
	cout<<x<<" is an even number.";
	else
	cout<<x<<" is an odd number.";
	
}
