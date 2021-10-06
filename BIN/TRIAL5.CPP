#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
 clrscr();
 char string[100];
 int x;
 char ans;
 ans='y';
 while(ans=='y')
 {
  cout<<"Please enter a string: ";
  cin.getline(string,100);
  for(x=0;x<100;x++)
  {
   if(string[x]!='\0' && string[x]!=32)
   {
    string[x]=string[x]+1;
   }
   else if(string[x]==32)
   {
   string[x]=string[x];
   }
  }
  cout<<"encypted string: "<<string<<endl;
  cout<<"would you like to encrypt another string?(y/n): ";cin>>ans;
  }
 getch();
}