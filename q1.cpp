#include<iostream>
#include<iomanip>
using namespace std;
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imaginary;
    public:
    Complex() //default constructor for uninitialized object 
    {};
    Complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    Complex mul(const Complex& m);
    void print();
    friend void operator +(const Complex &c1,const Complex &c2); //overloaded operator using friend fn
};



Complex Complex::mul(const Complex& m)
{
    Complex temp(m.real,m.imaginary); // (a+bi)*(x+yi)
    temp.real=real*m.real-imaginary*m.imaginary; //ax-by
    temp.imaginary=imaginary*m.real+m.imaginary*real; //bx+ay
    return temp;
}
void Complex::print()
{
    cout<<real<<"+"<<imaginary<<"i"<<endl;
}
void operator+(const Complex &c1,const Complex &c2)
{
    int r=c1.real+c2.real;
    int imag=c1.imaginary+c2.imaginary;
    cout<<"The sum is:"<<r<<"+i"<<imag<<endl;
    
}
int main()
{
    char option;
    cout<<"This is a complex number calculator."<<endl;
    int r1,r2,i1,i2;
    cout<<"Enter the real part of first number:";
    cin>>r1;
    cout<<"Enter the imaginary part of first number:";
    cin>>i1;
    cout<<"Enter the real part of second number:";
    cin>>r2;
    cout<<"Enter the imaginary part of second number:";
    cin>>i2;
    Complex c1(r1,i1);
    Complex c2(r2,i2);
    cout<<"The first complex number looks like:";
    c1.print();
    cout<<"The second complex number looks like:";
    c2.print();
    Complex c3; //creating object for multiplication
    c3=c1.mul(c2);
    cout<<"The product of thee two complex numbers is:";
    c3.print(); //printing product
    c1+c2; //adding c1 and c2 using overloaded operator
    return 0;
}


