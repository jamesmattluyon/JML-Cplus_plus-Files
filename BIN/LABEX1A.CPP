#include<iostream.h>
#include<conio.h>
#define g gotoxy
#define tc textcolor
void main()
{

 clrscr();
 float F,Celcius;
 tc(YELLOW);
 g(1,1);cout<<"Enter Fahrenheit value:_______ degrees.";
 g(1,3);cout<<"For a Fahrenheit temperature of _______ degrees.";
 g(1,4);cout<<"The equivalent Celsius temperature is ___________ degrees.";
 g(27,1);cin>>F;
 g(1,3);cout<<"For a Fahrenheit temperature of ___" << F << "__";
 Celcius = (F - 32)/1.8;
 g(1,4);cout<<"The equivalent Celsius temperature is _____"<< Celcius <<"____degrees"<<endl;


 getch();
}