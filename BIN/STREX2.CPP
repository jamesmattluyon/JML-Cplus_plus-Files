#include<iostream.h>
#include<string.h>
#include<conio.h>
int main()
{ char mname[20],fname[15];
clrscr();
cout<<"What is your name? ";
cin>>fname;
cout<<"Hi "<<fname<<"!"<<endl;
cout<<"What is your maiden's name and last name? ";
cin>>ws;
cin.getline(mname,20);
cout<<"So, you are "<<fname<<" "<<mname<<"!";
getch();
return 0; }