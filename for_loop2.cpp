#include<iostream>
using namespace std;
int func1(int num1, int num2);
int main()
{
	cout<<"This program prints the odd numbers for a range of integers."<<endl;
	int num1,num2;
	cout<<"Enter the number from which the range starts."<<endl;
	cin>>num1;
	cout<<"Enter the number where range ends."<<endl;
	cin>>num2;
	cout<<"The odd numbers are:"<<endl;
	func1(num1,num2);
	return 0;
}
int func1(int num1, int num2)
{
	for(int i=num1;i<=num2;i+=2)
	{if (i%2!=0)
	{cout<<i<<endl;}
	else
	{cout<<++i<<endl;} //it is mandatory to use else here otherwise if num1 is odd, nothing will get printed
	}                   // we use prefix operator here because we want the execution of increment at the same time
	return 0;
}
