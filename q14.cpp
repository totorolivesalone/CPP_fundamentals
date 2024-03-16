#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student
{
 int roll;
 char name[30];
 int standard;
 float year;
 int totalmarks;
public:
 student() { }
 void getData(); // get student data from user
 void displayData(); // display data
};
void student :: getData() {
 cout << "\nEnter Roll No. :: ";
 cin >> roll;
 cin.ignore(); // ignore the newline char inserted when you press enter
 cout << "\nEnter Name :: ";
 cin.getline(name, 30);
 cout << "\nEnter Standard :: ";
 cin >> standard;
 cout << "\nEnter year :: ";
 cin >> year;
 cout << "\nEnter Total Marks :: ";
 cin >> totalmarks;
}
void student :: displayData() {
 cout << "\nRoll No. :: " << roll << endl;
 cout << "\nName :: " << name << endl;
 cout << "\nStandard :: " << standard << endl;
 cout << "\nYear :: " << year << endl;
 cout << "\nTotal Marks :: " << totalmarks << endl;
}
int main()
{
 student s[1]; // array of 3 student objects
 fstream file;
 int i;
 file.open("xyz.txt", ios :: out); // open file for writing
 cout << "\nWriting Student information to the file :- " << endl;
 cout << "\nEnter 1 students Details to the File :- " << endl;
 for (i = 0; i < 1; i++)
 {
 s[i].getData();
 // write the object to a file
 file.write((char *)&s[i], sizeof(s[i]));
 }
 
 file.close(); // close the file
 file.open("xyz.txt", ios :: in); // open file for reading
 cout << "\nReading Student information to the file :- " << endl;
 for (i = 0; i < 1; i++)
 {
 // read an object from a file
 file.read((char *)&s[i], sizeof(s[i]));
 s[i].displayData();
 }
 file.close(); // close the file
 return 0;
}
