#include<iostream.h>
#include<conio.h>
#define g gotoxy
void main()
{
 clrscr();
 float Fahrenheit,Celsius;
 g(1,1);cout<<"Fahrenheit: ";
 g(25,1);cout<<"Celsius: ";
 g(13,1);cin>>Fahrenheit;
 Celsius = (Fahrenheit-32)/1.8;
 g(25,1);cout<<"Celsius: "<<Celsius;

 getch();
}
