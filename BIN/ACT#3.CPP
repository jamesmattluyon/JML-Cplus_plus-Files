#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define g gotoxy
#define c cprintf
#define tc textcolor
main()
{
 float a,b;
 char ans;
 clrscr();
 g(5,5);c("Enter a value: ");
 g(50,5);c("Enter another value: ");
 g(25,25);c("Operation: ");
 g(10,15);c("[A] Additon");
 g(10,16);c("[S] Subraction");
 g(10,17);c("[M] Multiplication");
 g(10,18);c("[D] Division");
 g(20,5);cin>>a;
 g(71,5);cin>>b;
 g(35,25);cin>>ans;

 if(ans == 'A' || ans == 'a')
 {
 g(50,26);(cout<<"Answer= "<< a + b);
 }

 if(ans == 'S' || ans == 's')
 {
 g(50,26);(cout<<"Answer= "<< a - b);
 }

 if(ans == 'M' || ans == 'm')
 {
 g(50,27);(cout<<"Answer= "<< a * b);
 }

 if(ans == 'D' || ans == 'd')
 {
 g(50,26);(cout<<"Answer= "<< a / b);
 }
 getch();
 return 0;
}