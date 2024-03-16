#include<iostream>
using namespace std;
int dayDecprev(int year);
int Dday(int d1,int m1,int y1, int d2, int m2, int y2);
string finalday(int d1,int m1,int y1, int d2, int m2, int y2);
int main()
{
	int d1,m1,y1,d2,m2,y2;
	cout<<"This program prints the day of the week you were born in."<<endl;
	cout<<"Enter your birthdate in dd/mm/yy format."<<endl;
	cin>>d1>>m1>>y1;
	cout<<"Enter the present date in dd/mm/yy format."<<endl;
	cin>>d2>>m2>>y2;
	cout<<"The day on your birthday in "<<y1<<" was "<<finalday(d1,m1,y1,d2,m2,y2);
	
	return 0;
	
}
int dayDecprev(int year)
{
	int yy,day;
	yy=year%100;
	if(year%100==0)
	day=(99*365+99/4+99/100+99/400)%7;
	else
	day=(((yy-1)*365)+((yy-1)/4)+((yy-1)/100)+((yy-1)/400))%7;
		return day;
}
int Dday(int d1,int m1,int y1, int d2, int m2, int y2)
{
	int Dec31=dayDecprev(y1);
	int days;
	int daycode;
	
	switch(m1)
	{case 12:days=334;
	break;
	case 11:days=304;
	break;
	case 10:days=273;
	break;
	case 9:days=243;
	break;
	case 8:days=212;
	break;
	case 7:days=181;
	break;
	case 6:days=151;
	break;
	case 5:days=120;
	break;
	case 4:days=90;
	break;
	case 3:days=59;
	break;
	case 2:days=31;
	break;
	default:days=0;
	}
	if(!(y2%4)&&(y2%100)||!(y2%400))
	{if(m2>1)
	daycode=Dec31+1;
	else
	daycode=Dec31;
	}
	
	else
	daycode=Dec31;
	int final=(days+daycode+d1)%7;
	return final;
}
string finalday(int d1,int m1,int y1, int d2, int m2, int y2)
{
	int final=Dday(d1,m1,y1,d2,m2,y2);
	string day;
	switch(final)
	{
		case 0:day="Sunday";
		break;
		case 1:day="Monday";
		break;
		case 2:day="Tuesday";
		break;
		case 3:day="Wednesday";
		break;
		case 4:day="Thursday";
		break;
		case 5:day="Friday";
		break;
		case 6:day="Saturday";
		break;
		default:day="Day not found";
		
	}
	return day;
}
