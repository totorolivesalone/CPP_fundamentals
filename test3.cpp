#include<iostream>
using namespace std;
int func1(int num1,int num2);
int main()
{
	int num1, num2;
	cout<<"This program calculates exponents."<<endl;
	cout<<"Enter the base value."<<endl;
	cin>>num1;
	cout<<"Enter the exponent/ power."<<endl;
	cin>>num2;
	cout<<func1(num1,num2);
	return 0;
}
int func1(int num1,int num2)
{
	int mult;
	for(int i=num1; i<=num2;i++ )
	{
		mult=mult*i;
	}
	return mult;
}
