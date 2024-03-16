#include<iostream>
using namespace std;
int func1(int num,int y);
int main()
{
	cout<<"This program prints multiples of 7"<<endl;
	cout<<"Enter range of numbers."<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"The multiples of seven in the above range are:"<<endl;
	func1(x,y);
	return 0;
	
}
int func1(int num, int y)
{
	for(int i=num;i<=y;i+=7)
	if(i%7==0)
	{cout<<i<<endl;
	}
	else
	{
		i=i-(i%7)+7;
		cout<<i<<endl;
	}
	return 0;
}
