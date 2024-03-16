#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"This program calculates area and circumference of circle."<<endl;
	cout<<"Enter the radius of the circle"<<endl;
	float r,area,circumference;
	cin>>r;
	area=3.14*r*r;
	circumference=2*3.14*r;
	cout<<"The area of the circle with radius "<<r<<"cm "<<"is "<<area<<endl;
	cout<<"The circumference of the circle with radius "<<r<<"cm"<<" is "<<circumference;
	return 0;
}
