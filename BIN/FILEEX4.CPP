#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
clrscr();
ofstream out;
out.open("C:/record.dat");
if(out.fail())
{
cout<<"Output file opening failed.\n";
exit(1);
}
int flag=1;
char choice;
struct {
char name[20];
char number[13];
}person;
while(flag)
{
cout<<"Input phone directory entry.\n"<<"Name : ";
cin>>ws;
cin.getline(person.name,20);
cout<<"Phone Number: ";
cin.getline(person.number,13);
out<<" person.name"<<" "<<person.number<<"\n";
cout<<"Another entry [Y/N]?";
cin>>choice;
if(toupper(choice)=='Y')
flag=1;
else
flag=0;
}
}