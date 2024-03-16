#include<iostream>
using namespace std;
void func(int &x,int &y);
int main()
{
	cout<<"This program swaps numbers stored in two variables a and b."<<endl;
	int a,b;
	cout<<"Enter value of 'a'"<<endl;
	cin>>a;
	cout<<"Enter value of 'b'"<<endl;
	cin>>b;
	cout<<"(a,b) before swap:("<<a<<","<<b<<")"<<endl;
	func(a,b);
	cout<<"(a,b) after swap:("<<a<<","<<b<<")"<<endl;
	return 0;
}
void func(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
