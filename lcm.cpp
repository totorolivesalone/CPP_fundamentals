#include<iostream>
using namespace std;
int max(int x,int y);
int lcm(int x, int y);
int main()
{
	cout<<"This program prints lowest common multiple of two numbers."<<endl;
	int a,b;
	cout<<"Enter the first number."<<endl;
	cin>>a;
	cout<<"Enter the second number."<<endl;
	cin>>b;
	cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a,b);
	return 0;
}
int max(int x,int y)
{
	int c=x>y?x:y;
	return c;
}
int lcm(int x, int y)
{
	int val=max(x,y);
	int result=val;
	for(int i=val;i>=val;i++)
	{
		if(i%x==0 && i%y==0)
		{
			result=i;
			break;
			
		}
	}
	return result;
}
