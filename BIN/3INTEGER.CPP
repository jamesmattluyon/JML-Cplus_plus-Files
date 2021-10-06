#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 int a,b,c;
 int ans;
 cout<<"Enter a number";
 cin>>a;
 cout<<"Enter another number";
 cin>>b;
 cout<<"Enter a last number";
 cin>>c;
 if(a<b&c)
 {
  cout<<"the highest number is"<< ans << endl;
 }
 else
 {
  cout<<"the lowest number is"<< ans << endl;
 }
 if(b<c&a)
 {
  cout<<"the highest number is"<< ans << endl;
 }
 else
 {
  cout<<"the lowest number is"<< ans << endl;
 }
 if(c<a&b)
 {
  cout<<"the highest number is"<< ans << endl;
 }
 else
 {
  cout<<"the lowest number is"<< ans << endl;
 }
 getch();
}