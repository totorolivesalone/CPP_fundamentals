#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	int prod=1;
	cout<<"Enter the number you want factorial of."<<endl;
	cin>>num;
	for(int i=1;i<=num;i++)
	{for(int j=1;j<=i;j++)
	{prod=prod*i;}
	sum=sum+prod;
	}
	
	cout<<"The factorial of "<<num<<" is "<<sum;
	return 0;
	
	
}
