#include<iostream>
using namespace std;
int main()
{
	string name,vegetable;
	cout<<"Hello!What is your name?\n";
	cin>>name;
	cout<<name<<", Which is the vegetable that you have?\n";
	cin>>vegetable;
	float price;
	cout<<"What is the price of the vegetable?\n";
	cin>>price;
	int quantity;
	cout<<"What is the quantity of "<<vegetable<<" in kg?\n";
	cin>>quantity;
	char grade;
	cout<<"What is the grade of the vegetable?\n";
	cin>>grade;
	bool answer;
	cout<<"Are the vegetables fresh? \n";
	cin>>answer;
	return 0;
}
