#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char name[100][30];
 int i;
 for(i=0;i<3;i++)
 {
 cin>>name[i];
 cout<<"\n";
 }
 for(i=0;i<3;i++)
 {
 cout<<name[i] <<endl;
 }
 getch();
}