#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#define g gotoxy
main()
{
 double a,b,c=1,result;
 char ans;
 clrscr();
 g(5,1);cout<<"Input Number: ";
 g(15,3);cout<<" [F] Factorial";
 g(15,4);cout<<" [S] Square Root";
 g(15,5);cout<<" [P] Power";
 g(10,7);cout<<" Input Operator: ";
 g(18,8);cout<<" Answer= ";
 g(19,1);cin>>a;
 g(27,7);cin>>ans;

 if( ans == 'F' || ans == 'f' && a == 5)
 {
 g(27,8);cout<< a*(a-1)*(a-2)*(a-3)*(a-4);
 }
 else if( ans == 'F' || ans == 'f' && a==4)
 {
 g(27,8);cout<< a*(a-1)*(a-2)*(a-3);
 }
 else if( ans == 'F' || ans == 'f' && a==3)
 {
 g(27,8);cout<< a*(a-1)*(a-2);
 }
 else if( ans == 'F' || ans == 'f' && a==2)
 {
 g(27,8);cout<< a*(a-1);
 }
 else if( ans == 'F' || ans == 'f' && a==1)
 {
 g(27,8);cout<< a*a;
 }

 if( ans == 'S' || ans == 's')
 {
  cout<< sqrt(a);
 }

 if( ans == 'P' || ans == 'p')
 {
 g(10,9);cout<<" Raise to power: ";cin>>b;
 g(27,8);cout<< pow(a,b);
 }



 getch();
 return 0;
}