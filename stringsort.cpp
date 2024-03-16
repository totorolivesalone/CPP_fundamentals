#include<iostream>
#include<iomanip>
using namespace std;
class Bubble
{
	char **arr;
	int size;
	public:
		Bubble(int s)
		{
			size=s;
			arr=new char*[size];
		}
		void getinput()
		{
			cout<<"Enter "<<size<<" elements :"<<endl;
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
		}
		void unsortdisp()
		{
			cout<<"Unsorted array looks like:"<<endl;
			for(int i=0;i<size;i++)
			{
				cout<<setw(4)<<arr[i];
			}
			cout<<endl;
		}
		void sort()
		{
			char *temp;
			int compare=0;
			int pass=0;
			int swaps=0;
			for(int i=0;i<size-1;i++)
			{
				for(int j=0;j<size-i-1;j++)
				{
					compare++;
					if(arr[j]>arr[j+1])
					{
						*temp=*arr[j];
						*arr[j]=*arr[j+1];
						*arr[j+1]=*temp;
						swaps++;
					}
					
				}
				pass++;
			}
			cout<<"Sorted array looks like:"<<endl;
			for(int k=0;k<size;k++)
			{
				cout<<setw(4)<<arr[k];
			}
			cout<<endl;
			cout<<"Total number of passes:"<<pass<<endl;
			cout<<"Total number of comparisons:"<<compare<<endl;
			cout<<"Total number of swaps:"<<swaps<<endl;
			
		}
		~Bubble()
		{
			delete [] arr;
		}
};
int main()
{
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	Bubble obj(size);
	obj.getinput();
	obj.unsortdisp();
	obj.sort();
	return 0;
}

