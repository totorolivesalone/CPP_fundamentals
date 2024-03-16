#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	cout<<"Enter a sentence:(Press EOF command to end program)"<<endl;
	string word;
	fstream file1;
	fstream file2;
	fstream file3;
	file1.open("fileV.txt");
	file2.open("fileD.txt"
	);
	file3.open("fileRest.txt");
	if(!file3)
	{
		cout<<"File 3 did not open";
		exit(100);
	}
	while(cin>>word)
	{
		if(word[0]=='a'|| word[0]=='e' || word[0]=='i'||word[0]=='o'||word[0]=='u')
		{
			file1<<word<<" ";
		}
		else if(isdigit(word[0]))
		{
			file2<<word<<" ";
			
		}
		else
		{
			file3<<word<<" ";
		}
		
	}
	file1.close();
	file2.close();
	file3.close();
	cout<<"End of demonstration"<<endl;
	return 0;
}
