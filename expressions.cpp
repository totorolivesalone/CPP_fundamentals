//degrees to radians 
#include<iostream>
using namespace std;
#define const 0.0174533;
int main()
{   double x,y;
	cout<<"This program converts degrees to radians"<<endl;
	cout<<"Enter the angle in degrees"<<endl;
	cin>>x;
	y=x*const;
	cout<<x<<" degrees is "<<y<<"radians."<<endl;
	return 0;
	}
