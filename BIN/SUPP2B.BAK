#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 clrscr();
 char str[100];
 int frequency[26];
 int i,len,spaces=0,comma=0,period=0;
 cout<<"Enter a string: ";
 cin.getline(str,100);
 len=strlen(str);
 for(i=0;i<26;i++)
 {
  frequency[i]=0;
 }
 for(i=0;i<len;i++)
 {
  if(str[i]>='a'&& str[i]<='z')
  {
  frequency[str[i]-97]++;
  }
  else if(str[i]>='A'&& str[i]<='Z')
  {
  frequency[str[i]-65]++;
  }
  else if(str[i]==' ')
  {
  ++spaces;
  }
  else if(str[i]==',')
  {
  ++comma;
  }
  else if(str[i]=='.')
  {
  ++period;
  }
 }
 cout<<"Whitespaces= "<<spaces;
 cout<<"      Comma= "<<comma;
 cout<<"     Period= "<<period;
 for(i=0;i<26;i++)
 {
  if(frequency[i]!=0)
  {
   printf("\n\"%c\"= %d\n",(i+97),frequency[i]);
  }
 }
 getch();
}