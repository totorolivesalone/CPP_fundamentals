#include<iostream>
#include<iomanip>
using namespace std;
class Path
{

	int **arr; //matrix
	int *inp; //array for integral set
	char *inpu; //array for char set
	int size;
	int flag;
	int **ogarr;
	public:
	Path()
	{
		size=1;
		inp=new int[size];
		arr=new int*[size];
		ogarr=new int*[size];
		inpu=new char[size];
		for(int i=0;i<size;i++)
		{
			arr[i]=new int[size];
		}
		for(int i=0;i<size;i++)
		{
			ogarr[i]=new int[size];
		}
		
	}
	Path(int s)
	{
		size=s;
		inp=new int[size];
		inpu=new char[size];
		arr=new int*[size];
		for(int i=0;i<size;i++)
		{
			arr[i]=new int[size];
		}
		ogarr=new int*[size];
		for(int i=0;i<size;i++)
		{
			ogarr[i]=new int[size];
		}
		flag=1;
	}
	void getset()
	{
		cout<<"Enter "<<size<<" vertices of graph."<<endl;
		for(int i=0;i<size;i++)
		{
			cin>>inp[i];
		}
		
	}
	void getcharset()
	{
		cout<<"Enter "<<size<<"vertices of graph be entered."<<endl;
		for(int i=0;i<size;i++)
		{
			cin>>inpu[i];
		}
	
		
	}
	void sort()
	{
		int temp=0;
		for(int i=0;i<size-1;i++)
			{
				for(int j=0;j<size-i-1;j++)
				{
					
					if(inp[j]>inp[j+1])
					{
						temp=inp[j];
						inp[j]=inp[j+1];
						inp[j+1]=temp;
						
					}
					
				}
				
			}
		
	}
	void charsort()
	{
		char temp;
		for(int i=0;i<size-1;i++)
			{
				for(int j=0;j<size-i-1;j++)
				{
					
					if(inpu[j]>inpu[j+1])
					{
						temp=inpu[j];
						inpu[j]=inpu[j+1];
						inpu[j+1]=temp;
						
					}
					
				}
				
			}
	}
    void getmat()
	{
		cout<<"Enter number of edges between two vertices(Enter 0 if no edge exists between vertices)."<<endl;
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				cout<<"Enter number of edges from "<<inp[i]<<" to "<<inp[j]<<" present in graph."<<endl;
				cin>>ogarr[i][j];
				arr[i][j]=0;
				
			}
		}
	
	}
	
	
	void getcharmat()
	{
		cout<<"Enter number of edges between two vertices(Enter 0 if no edge exists between vertices)."<<endl;
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				cout<<"Enter number of edges from "<<inpu[i]<<" to "<<inpu[j]<<" present in graph."<<endl;
				cin>>ogarr[i][j];
				arr[i][j]=0;
				
			}
		}
	}
	void printset()
	{
		cout<<"Set of verices  looks like:"<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<setw(4)<<inp[i];
		}
		cout<<endl;
	}
	void printcharset()
	{
		cout<<"Set of vertices look like:"<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<setw(4)<<(char)inpu[i];
		}
		cout<<endl;
		
	}
	void printmat()
	{
		cout<<"Adjacency Matrix looks like:"<<endl;
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				cout<<setw(4)<<ogarr[i][j];
			}
			cout<<endl;
		}
	}
	void matrixmult()
	{
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
			
				for(int k=0;k<size;k++)
				{
					arr[i][j]+=(ogarr[i][k])*(ogarr[k][j]);
				}
			}
		}
			
	}
	void pathfinder(int n,int x, int y)
	{
		if(n==1)
		{
			cout<<"Number of paths with length 1 between "<<x<<" and "<<y<<" is:";
			cout<<arr[x][y]<<endl;
		}
		else if(n>1)
		{
			for(int i=0;i<n;i++)
			{
				matrixmult();
			}
			cout<<"Number of paths with length "<<n<<" between "<<x<<" and "<<y<<" is:";
			cout<<arr[x][y]<<endl;
		}
		else
		{
			cout<<"Invalid path!"<<endl;
		}
		
		
	}
		void charpathfinder(int n,char a, char b)
	{
		int x=-1,y=-1;
		for(int i=0;i<size;i++)
		{
		   if(inpu[i]==a)
		    {
		 	x=i;
			 }
			 if(inpu[i]==b)	
			 {
			 	y=i;
			 }
			
		} 
		if(x==-1 || y==-1)
		{
			cout<<"Invalid vertices entered.";
		}
		else if(n==1)
		{
			cout<<"Number of paths with length 1 between "<<a<<" and "<<b<<" is:";
			cout<<arr[x][y]<<endl;
		}
		else if(n>1)
		{
			for(int i=0;i<n
			;i++)
			{
				matrixmult();
			}
			cout<<"Number of paths with length "<<n<<" between "<<a<<" and "<<b<<" is:";
			cout<<arr[x][y]<<endl;
		}
		else
		{
			cout<<"Invalid path!";
		}
		
		
	}
	void printfinalmatrix()
	{
		cout<<"New Matrix looks like:"<<endl;
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				cout<<setw(4)<<arr[i][j];
			}
			cout<<endl;
		}
	}
};
int main()
{
	cout<<"This is a path calculator."<<endl;
	cout<<"Enter the number of vertices in graph:";
	int size;
	cin>>size;
	cout<<"Choose the type of elements to label vertices:"<<endl;
	cout<<"To choose integral labelling of vertices, press 1."<<endl;
	cout<<"To choose alphabetical labelling of vertices,press 2."<<endl;
	int option,n;
	int x,y;
	char a,b;
	cin>>option;
	Path ob(size);
	if(option==1)
	{
		ob.getset();
		ob.sort();
		ob.getmat();
		ob.printset();
		ob.printmat();
	    cout<<"Enter length of path:";
	    cin>>n;
	    cout<<"Enter starting vertex:";
	    cin>>x;
	    cout<<"Enter ending vertex:";
	    cin>>y;
	    ob.pathfinder(n,x,y);
	    
	    ob.printfinalmatrix();
	    
	}
	else if(option==2)
	{
		ob.getcharset();
		ob.charsort();
		ob.getcharmat();
		ob.printcharset();
		ob.printmat();
		cout<<"Enter length of path:";
	    cin>>n;
	    cout<<"Enter starting vertex:";
	    cin>>a;
	    cout<<"Enter ending vertex:";
	    cin>>b;
	    ob.charpathfinder(n,a,b);
	    
	    ob.printfinalmatrix();
	    
	}
	else
	{
		cout<<"Invalid option chosen."<<endl;
	}
	return 0;
}
