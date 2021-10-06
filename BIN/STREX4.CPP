//This program illustrate the use of strcpy and strcat
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
clrscr();
const char *p1="Rainbow";
const char *p2=" doesn't end. ";
char name[100];
strcat(strcat(strcpy(name,p1),p2),"Yes! Its true.");
cout<<name;
getch();
return 0; }