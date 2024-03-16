#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
using namespace std;
class Triangle
{
	private:
		float side1;
		float side2;
		float side3;
		float area;
		public:
			Triangle(){
			}
			float CalcArea()
			{
				float semi=(side1+side2+side3)/2;
			area=semi*(semi-side1)*(semi-side2)*(semi-side3);
			area=sqrt(area);
			return area;
				
			}
			float CalcArea(float a,float b)
			{
				area=(a*b)/2;
				return area;		
			}
			float CalcArea(float a,float b,float c)
			{
			float semi=(a+b+c)/2;
			area=semi*(semi-a)*(semi-b)*(semi-c);
			area=sqrt(area);
			return area;
			}
			void printArea()
			{
				cout<<"Area of triangle is:"<<area<<" square units"<<endl;
			}
			Triangle operator = (const Triangle &t)
			{
				Triangle temp;
				temp.side1=t.side1;
				temp.side2=t.side2;
				temp.side3=t.side3;
				temp.area=temp.CalcArea(side1,side2,side3);
				return temp;
			}
			friend bool operator ==(const Triangle &t1,const Triangle &t2);
		
	
};
bool operator ==(const Triangle &t1,const Triangle &t2)
{
	bool case1=(t1.side1==t2.side1 && t1.side1==t2.side2 && t1.side3==t2.side3);
	bool case2=(t1.side1==t2.side2 && t1.side2==t2.side3 && t1.side3==t1.side1);
	bool case3=(t1.side1==t2.side3 && t1.side2==t1.side1 && t1.side3==t1.side2);
	bool result=case1 || case2 || case3;
	return result;
}
int main()
{
	Triangle t1;
	t1.CalcArea(3,4,5);
	cout<<"Triangle 1*************************************"<<endl;
	t1.printArea();
	Triangle t2;
	t2.CalcArea(2,10);
	cout<<"Triangle 2**************************************"<<endl;
	t2.printArea();
	Triangle t3;
	t3=t1;
	cout<<"Triangle3(equal to Triangle1)*****************************"<<endl;
	t3.printArea();
	bool answer=(t3==t2);
	if(answer==0)
	{
		cout<<"Triangle t2 and t3 are unequal"<<endl;
		
	}
	else
	cout<<"Triangles are equal"<<endl;
}
