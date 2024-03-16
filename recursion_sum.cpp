#include<iostream>
using namespace std;
long sum(int k);
int main()
{
    cout<<"This program prints sums up user defined numbers. Press<EOF> to stop."<<endl;
    int n;
    cout<<"Enter a number."<<endl;
    while(cin>>n)
    {cout<<"Enter a number."<<endl;}
    cout<<"Sum of integers is equal to"<<sum(n);
    return 0;
}

long sum( int k)
{
    if(k!=0)
    return (k+sum(k-1));
    else
    return k;
    
    
    
}
