#include <iostream>
using namespace std;
int main()
{
	cout<<"This program compares three numbers."<<endl;
	cout<<"Enter three distinct integers."<<endl;
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	int result=((num1<num2 && num1<num3)?num1:(num2<num3?num2:num3));//ternary operator instead of if else
	cout<<"The smallest number is "<<result;
	return 0;
}
