#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"This program calculates the roots of quadratic equation of form a(x^2)+bx+c=0"<<endl;
	cout<<"Enter a,b and c respectively."<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	int d=b*b-4*a*c;
	float d1,d2;
	float disc=sqrt(d);
	if (d>=0) //first we will divide real roots from imaginary
	{if (a==0) //roots with a=0 would not be easily defined if we apply root formula
	{if(b==0) //a==0 is a different selection case, when a and b both are zero
	{cout<<"There are no real roots.";} //then the roots don't exist
	else
	{d1=static_cast<float>(-c)/b;//if a is zero but b is not then, x=-c/b
	cout<<"The real root is "<<d1;}}
	else //this else shows us when d>=0 and a is not equal to 1, real quadratic equation
	{d1=(-b+disc)/(2*a);
	d2=(-b-disc)/(2*a);
	cout<<"The real roots are "<<d1<<" and "<<d2;}}
	else //this else stands for condition when d<0
	cout<<"There are no real roots for this equation.";
	
	return 0;
}

	