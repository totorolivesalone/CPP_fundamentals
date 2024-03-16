#include<iostream>
using namespace std;
int gcdfunc(int x,int y);
int main()
{
	cout<<"This program prints GCD of two numbers."<<endl;
	int num1,num2;
	cout<<"Enter first number."<<endl;
	cin>>num1;
	cout<<"Enter second number."<<endl;
	cin>>num2;
	cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<gcdfunc(num1,num2);
	return 0;
	
	
}
int gcdfunc(int x,int y)
{
	if(y==0)
	return x;
	else
	return gcdfunc(y,x%y);
}
