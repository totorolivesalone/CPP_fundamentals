#include<iostream>
#include<iomanip>
using namespace std;
int* getinput(int array[], int size);
void func1(int array[],int size);
int main()
{
	int size;	
	cout<<"Enter the size of array:";
	cin>>size;
	int* arr;
	arr=new int[size];
	getinput(arr,size);
	func1(arr,size);
	return 0;
}
int* getinput(int array[], int size)
{
	cout<<"Enter "<<size<<" elements of array:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter "<<(i+1)<<" element:";
		cin>>array[i];
	}
	return array;
}
void func1(int array[],int size)
{
	cout<<"The array with deleted repeated elements look like:"<<endl;
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(array[i]==array[j])
			{
				for(int k=j;k<size-1;k++)
				{
					array[k]=array[k+1];
				}
				size--;
				j--;
			}
		}
	}
	for(int l=0;l<size;l++)
	{
		cout<<setw(5)<<array[l];
	}
}

