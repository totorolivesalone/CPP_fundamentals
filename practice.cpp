#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
double *func(const int arr[5],float x)
{
	double *p;
	double pt=static_cast<double>(arr[4]);
	p=&pt;
	return p;
}
int main()
{
	int array[5]={1,2,3,4,5};
	double ptr=*func(array,7.0);
	cout<<ptr;
	return 0;
	
}
