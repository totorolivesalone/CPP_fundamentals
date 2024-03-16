#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"This program prints patterns adds user-entered integers.Press<EOF>to stop."<<endl;
    int x=0,sum=0;
    cout<<"Enter the integers you want to add. Press<EOF> to stop."<<endl;
    do
    {sum+=x;
    }
    while(cin>>x);
    cout<<"The sum is "<<sum;
    return 0;
}

