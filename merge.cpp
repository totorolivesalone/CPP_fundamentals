#include<iostream>
#include<iomanip>
using namespace std;
void func1(int x[10],int y[10], int z[20],int size1,int size2);
int main()
{
    cout<<"This program merges two sorted arrays."<<endl;
    int size1,size2;
    cout<<"Enter size of first array.(limit=10)"<<endl;
    cin>>size1;
    int arr1[10];
    cout<<"Enter "<<size1<<" values to be inserted in first array in ascending order"<<endl;
    for(int i=0;i<size1;i++)
    {cin>>arr1[i];}
    int arr2[10];
    cout<<"Enter size of second array.(limit=10)"<<endl;
    cin>>size2;
    cout<<"Enter "<<size2<<" values to be inserted in first array in ascending order"<<endl;
    for(int i=0;i<size2;i++)
    {cin>>arr2[i];}
    int resultant[20];
    func1(arr1,arr2,resultant,size1,size2);
    int size3=size1+size2;
    cout<<"The new array looks like:"<<endl;
    for(int l=0;l<size3;l++)
    {cout<<setw(4)<<resultant[l];}
    return 0;
}
void func1(int x[10],int y[10], int z[20],int size1,int size2)
{
    int i=0,j=0,k=0;
    int size3=size1+size2;
    while(i<size1 && j<size2 )
    {
        if (x[i]<=y[j])
        {
            z[k++]=x[i++];
        }
        else
        {
            z[k++]=y[j++];
        }
    }
    while(i<size1 )
    {z[k++]=x[i++];}
    while(j<size2 )
    {z[k++]=y[j++];}
    return;
}
