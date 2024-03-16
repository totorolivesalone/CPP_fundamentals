#include<iostream>
using namespace std;
int main()
{
	cout<<"This program calculates sum of n integers."<<endl;
	cout<<"Enter the value of n."<<endl;
	int n;
	cin>>n;
	int sum,num;
	sum=0;
	for(int i=1;i<=n;i++) //here i is the iteration and i itself won't be involved in loop but sets up conditions
	{cout<<"Enter a number."<<endl; //through loop we will ask inputs from users n times
	cin>>num;
	sum+=num; // sum is going to be equal to sum + user inputs inserted each time.
	}
	cout<<"The sum of the integers is "<<sum;
	return 0;
}
