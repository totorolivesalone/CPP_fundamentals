#include<iostream>
using namespace std;
int min(int x,int y);
int func(int x, int y);
int main()
{
	int a,b;
	cout<<"This program prints greatest common divisor of two numbers."<<endl;
	cout<<"Enter first number."<<endl;
	cin>>a;
	cout<<"Enter second number."<<endl;
	cin>>b;
	min(a,b);
	cout<<"The greatest common divisor of "<<a<<" and "<<b<<" is "<<func(a,b);
	return 0;
	
}
int min(int x,int y) //this function determines which number is smallest of two
{
	int c=(x>y?y:x); //knowing smallest number will help us to determine where to start loop from as gcd is going to be
	return c;        //either the smallest number or number less than that
}
int func(int x, int y)
{
	int val=min(x,y); //we will initiate val with minimum of the two numbers 
	int result=val;
	for(int i=val;i>=1;i--) //loop's iteration starts with minimum of two and reduces by 1 after every iteration
	{
		if(x%i==0 && y%i==0) //if we detect any i being a divisor of both numbers
		{                   
			result=i;   // we will update the result
			break;       //break the loop as we have got the gcd and no longer need any more factors.
		}
	}
	return result;
}
