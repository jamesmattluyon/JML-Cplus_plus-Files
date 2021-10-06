//This program illustrates the use of strlen
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
int Count(char Source[100])
{ int L,J,Word=0,Number=0;
L=strlen(Source);
cout<<"It has "<<L<<" characters"<<endl;
for(J=0;J<=L;J++)
if(Source[J]=='\0' && Source[L]=='\0')
Number++;
return L;
}
int main()
{
char Source[100];
int Num;
clrscr();
cout<<"Enter your message: ";
cin.getline(Source,100);
Num=Count(Source);
cout<<"Your message contains "<< Num << endl;
getch();
return 0;
}