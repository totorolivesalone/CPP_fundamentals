#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"This is a number system converter."
}
void boctodec(int num,int base)
{
	int ans=0;
	int i=0;
	while(num>=0)
	{
		ans=ans+(num%10)*(pow(base,i));
		i++;
		num=num/10;
	}
	cout<<"The number in decimal system is :"<<ans;}
void hexatodec(int num)
{
	 int arr[50];
    int i=0;
    while(num>0)
    {
        arr[i]=num%16;
        num=num/16;
        i++;
    }
    cout<<"The number in hexadecimal number system is "<<endl;
    for(int j=i-1;j>=0;j--)
    { switch (arr[j])
    {case 10:cout<<"A";
    break;
    case 11:cout<<"B";
    break;
    case 12:cout<<"C";
    break;
    case 13:cout<<"D";
    break;
    case 14:cout<<"E";
    break;
    case 15:cout<<"F";
    break;
    default:
    cout<<arr[j];}}
    return 0;
}


	}	
void dectoothers(int num,int base)
{
	int array[20]=0;
	int i=0;
	int count=0;
	while(num>=0)
	{
		arr[i]=(num%base);
		i++;
		count=i;
		num=num/base;
		
	}
	cout<<"The number in base "<<base<<" is:";
	for(int i=count;i>=0;i--)
	{
		cout<<array[i];
		}	
	
}
void hextobin(string hexdec,int base)
{
    
	
	int i0;
		while(hexadec[i])
		{
		switch (hexdec[i]) {
        case '0':
            cout << "0000";
            break;
        case 1:
            cout << "0001";
            break;
        case 2:
            cout << "0010";
            break;
        case 3:
            cout << "0011";
            break;
        case '4':
            cout << "0100";
            break;
        case '5':
            cout << "0101";
            break;
        case '6':
            cout << "0110";
            break;
        case '7':
            cout << "0111";
            break;
        case '8':
            cout << "1000";
            break;
        case '9':
            cout << "1001";
            break;
        case 'A':
        case 'a':
            cout << "1010";
            break;
        case 'B':
        case 'b':
            cout << "1011";
            break;
        case 'C':
        case 'c':
            cout << "1100";
            break;
        case 'D':
        case 'd':
            cout << "1101";
            break;
        case 'E':
        case 'e':
            cout << "1110";
            break;
        case 'F':
        case 'f':
            cout << "1111";
            break;
        default:
            cout << "\nInvalid hexadecimal digit "
                 << hexdec[i];
        }i++;}
	
	
}
void octobin(int num)
{
	int arr[20];
	int i=0;
	int counter=0;
	while(num>0)
	{
		switch(num%10)
		{
			case 0: arr[i]=000;
			break;
			case 1: arr[i]=001;
			break;
			case 2:arr[i]=010;
			break;
			case 3:arr[i]=011;
			break;
			case 4:arr[i]=100;
			break;
			case 5:arr[i]=101;
			break;
			case 6:arr[i]=110;
			break;
			case 7:arr[i]=111;
			break;
			default:{cout<<"Incorrect octal number";
			exit(100);break;}
			
		}
		num=num/10;
		i++;
		++counter;
	}
	cout<<"The binary number is:";
	for(int j=counter;j>=0;j--)
	{
		cout<<arr[j];
	}
	
}

