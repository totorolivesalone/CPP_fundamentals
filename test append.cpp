#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	fstream file1;
	fstream file2;
	file1.open("xyz.txt");
	file2.open("abc.txt");
	char achar;
	while(file1.get(achar))
	{
		if(achar==' ')
		{continue;
		}
		file2.put(achar);
	}
	file2.close();
	return 0;
}
