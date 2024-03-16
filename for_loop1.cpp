#include<iostream>
using namespace std;
int func1(int n);
int main()
{
	cout<<"This program finds the sum of first n natural numbers."<<endl;
	cout<<"Enter the value of n."<<endl;
	int n;
	cin>>n;
	cout<<"The sum of "<<n<<" natural numbers is "<<func1(n);
	return 0;
}
int func1(int n)
{
	int sum;
	for(int i=0;i<=n;i++) //(initialization, condition, updation)
	{
		sum+=i; // we let sum=sum+i because each time sum is gonna be increased by the nth natural number.
	}
	return sum;
	
}
