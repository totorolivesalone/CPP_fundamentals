#include<iostream>
using namespace std;
int sum1(int &a, int &b);
int main()
{
	int x=2,y=2;
	int sum=x+y;
	sum1(x,y);
	cout<<"sum is "<<(x+y);
	return 0;
	
}
int sum1(int &a, int &b) //pass by reference
{
	a=3;
	b=4;
	return (a+b);
}
