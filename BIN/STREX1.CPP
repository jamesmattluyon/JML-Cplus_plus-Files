#include<iostream.h>
#include<string.h>
#include<conio.h>
int main()
{ char lname[20],fname[15];
clrscr();
cout<<"What is your first name? ";
cin>>fname;
cout<<"What is your last name? ";
cin>>lname;
cout<<"Hi "<<fname<<" "<<lname<<"!";
getch();
return 0;}