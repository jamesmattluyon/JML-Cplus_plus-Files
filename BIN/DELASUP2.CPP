#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct man
{
char name[30];
int roll;
int marks;
};
void main()
{
clrscr();
man abc;
char ch;
lb:
ofstream fill;
fill.open("record.dat",ios::out|ios::app);
cout<<"FILE DIRECTORY"<<"\n";
cout<<"Enter Name:";
cin>>abc.name;
cout<<"Enter Phone Number:";
cin>>abc.marks;
fill.write((char*)&abc,sizeof(man));
fill.close();
cout<<"\nwant to enter more details(y/n)";
cin>>ch;
if(ch=='Y'||ch=='y')
goto lb;
getch();
}