#include<iostream>
#include<iomanip>
using namespace std;
class Matrix
{
    private:
    int rows;
    int columns;
    int arr[5][5];

    public:
    Matrix()
    {
        rows=1;
        columns=1;
        arr[5][5]=0;
    }

    Matrix(int r,int c)
    {
        rows=r;
        columns=c;
        
    }
    void getinput();
    Matrix add(const Matrix& m);
    Matrix mult(const Matrix& ob2, int rf,int cf, int ri);
    Matrix sub(const Matrix& ob1);
    void trans();
    void print();
    
};
void Matrix::getinput()
{
    for(int i=0;i<rows;i++)
    {
    	cout<<"Row"<<i+1<<endl;
        for(int j=0;j<columns;j++)
        {
            cout<<"Enter element of column"<<j+1<<" :";
            cin>>arr[i][j];
        }
    }
}
Matrix Matrix::add(const Matrix& m)
{
    Matrix temp(m.rows,m.columns);
    for(int i=0;i<m.rows;i++)
    {
        for(int j=0;j<m.columns;j++)
        {
            temp.arr[i][j]=arr[i][j]+m.arr[i][j];
        }
    }
    return temp;
}
Matrix Matrix::sub(const Matrix& ob1)
{
    Matrix temp2(ob1.rows,ob1.columns);
    for(int i=0;i<ob1.rows;i++)
    {
        for(int j=0;j<ob1.columns;j++)
        {
            temp2.arr[i][j]=arr[i][j]-ob1.arr[i][j];
        }
    }
    return temp2;
}


Matrix Matrix::mult(const Matrix& ob2, int rf, int cf,int ri)
{
	Matrix temp1(rf,cf);
	 for(int i=0;i<rf;i++)   //i is gonna go upto r1 as r1 is rows of new matrix
    {for(int j=0;j<cf;j++)  //j is gonna go upto c2 as c2 is columns of new matrix
    {
        temp1.arr[i][j]=0;     //initializing array term as zero for upcoming sum
        for(int k=0;k<ri;k++) //k is gonna go upto c1 or r2 
        {
            temp1.arr[i][j]+=(arr[i][k])*(ob2.arr[k][j]); //array3 element of i,jth is gonna be sum of 
                                                   //array1 elements of ith row multiplied to corresponding
        }                                          //to array2 elements of jth column.k is r2,c1
    }}
return temp1;
}
void Matrix::trans()
{
	Matrix temp(columns,rows);
	for(int i=0;i<columns;i++)
{for(int j=0;j<rows;j++)
{
    temp.arr[i][j]=arr[j][i];
    cout<<setw(5)<<temp.arr[i][j];
}
cout<<endl;
}


}
void Matrix::print()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<setw(5)<<arr[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    
   cout<<"This is a matrix calculator."<<endl;
   cout<<"To carry out matrix addition: Press 'A'"<<endl;
   cout<<"To carry out matrix subtraction:Press 'S'"<<endl;
   cout<<"To carry out matrix multiplication:Press 'M' " <<endl;
   cout<<"To print transpose of matrix: Press'T' "<<endl;
   char opt;
   cin>>opt;
   int r1,r2,c1,c2;
   if(opt=='A' || opt=='a')
   {
   cout<<"Enter the rows of matrix1: ";
   cin>>r1;
   cout<<"Enter the columns of matrix1 :";
   cin>>c1;
   cout<<"Enter the rows of matrix2: ";
   cin>>r2;
   cout<<"Enter the columns of matrix2: ";
   cin>>c2;
   if(r1==r1 && c1==c2)
   {Matrix m1(r1,c1);
   Matrix m2(r2,c2);
   cout<<"Enter the elements of Matrix1"<<endl;
   m1.getinput();
   cout<<"Enter the elements of Matrix2"<<endl;
   m2.getinput();
   cout<<"Matrix1 looks like"<<endl;
   m1.print();
   cout<<"Matrix2 looks like"<<endl;
   m2.print();
   Matrix m3(r1,c1);
   m3=m1.add(m2);
   cout<<"The sum looks like"<<endl;
   m3.print();}
   else
   cout<<"Incompatible dimensions."<<endl;
}
else if(opt=='S' || opt=='s')
{
	cout<<"Enter the rows of matrix1: ";
   cin>>r1;
   cout<<"Enter the columns of matrix1 :";
   cin>>c1;
   cout<<"Enter the rows of matrix2: ";
   cin>>r2;
   cout<<"Enter the columns of matrix2: ";
   cin>>c2;
   if(r1==r1 && c1==c2)
   {Matrix m1(r1,c1);
   Matrix m2(r2,c2);
   cout<<"Enter the elements of Matrix1"<<endl;
   m1.getinput();
   cout<<"Enter the elements of Matrix2"<<endl;
   m2.getinput();
   cout<<"Matrix1 looks like"<<endl;
   m1.print();
   cout<<"Matrix2 looks like"<<endl;
   m2.print();
   Matrix m3(r1,c1);
   m3=m1.sub(m2);
   cout<<"The difference looks like"<<endl;
   m3.print();}
   else
   cout<<"Incompatible dimensions."<<endl;
	
}
else if(opt=='M' || opt=='m')
{
	cout<<"Enter the rows of Matrix1 :";
	cin>>r1;
	cout<<"Enter the columns of Matrix1 :";
	cin>>c1;
	cout<<"Enter the rows of Matrix2 :";
	cin>>r2;
	cout<<"Enter the columns of Matrix2 :";
	cin>>c2;
	if(c1==r2)
	{
		Matrix m1(r1,c1);
		Matrix m2(r2,c2);
		cout<<"Enter the elements of first matrix"<<endl;
		m1.getinput();
		cout<<"Enter the elements of second matrix"<<endl;
		m2.getinput();
		cout<<"Matrix1 looks like"<<endl;
         m1.print();
        cout<<"Matrix2 looks like"<<endl;
        m2.print();
        Matrix m3(r1,c2);
        m3=m1.mult(m2,r1,c2,r2);
        cout<<"The product looks like"<<endl;
        m3.print();}
        else
        cout<<"Incompatible dimensions";
     	
	}
	else if(opt=='T' || opt=='t')
	{
		cout<<"Enter the number of rows of matrix :";
		cin>>r1;
		cout<<"Enter the number of columns of matrix :";
		cin>>c1;
		Matrix m1(r1,c1);
		cout<<"Enter the elements of Matrix :"<<endl;
		m1.getinput();
		cout<<"The matrix looks like"<<endl;
		m1.print();
		cout<<"The transpose of Matrix looks like"<<endl;
		m1.trans();
		
	}
	else
	cout<<"Invalid option selected.";
return 0;	
}

   
   
   
   
   
   
   
  
