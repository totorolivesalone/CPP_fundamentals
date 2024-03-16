#include<iostream>
using namespace std;
class Fraction
{
	private:
		int numerator;
		int denominator;
	public:
		//void store(int n, int d);
		Fraction();
		
		void printIn();
		
};
/*void Fraction::store(int n,int d)
{
	numerator=n;
	denominator=d;
	return;
}*/

Fraction::Fraction() //default costructor effect
{
	
}

void Fraction::printIn()
{
	cout<<numerator<<"/"<<denominator;
	return;
}
void getInputs(int &n,int &d);
int main()
{
	cout<<"This program prints fractions."<<endl;
	
	Fraction fr1;
	cout<<"The first fraction looks like:";
	fr1.printIn();

	
	return 0;

	
}
/*void getInputs(int &n,int &d)
{
	cout<<"Enter numerator"<<endl;
	cin>>n;
	cout<<"Enter denominator(except any number except 0)"<<endl;
	cin>>d;
}*/
