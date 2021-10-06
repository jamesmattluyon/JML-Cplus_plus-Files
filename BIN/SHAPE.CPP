#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#define g gotoxy
#define c cprintf
#define tc textcolor
int main()
{
 float a;
 char *shape="Triangle",letters;
 clrscr();
 g(1,1);cout<<" \"Create a shape\" ";
 g(1,2);cout<<" What shape to create: ";
 g(1,3);cout<<" What character will be use: ";
 g(1,20);cout<<" Animation(blink): ";
 g(24,2);cin>> shape;
 g(30,3);cin>> letters;
 g(20,20);cin>> a;


 if( (shape == "Triangle") || (shape == "triangle") || (a == 1) )
 {
 tc(YELLOW);
 g(35,10);c("þ");
 delay(200);
 g(34,11);c("þ þ");
 delay(200);
 g(33,12);c("þ   þ");
 delay(200);
 g(32,13);c("þþþþþþþ");
 delay(200);
 }

 if( shape == "Triangle" || shape == "triangle" || a == 2 )
 {
 tc(YELLOW);
 g(35,10);c("þ");
 delay(200);
 g(34,11);c("þ þ");
 delay(200);
 g(33,12);c("þ   þ");
 delay(200);
 g(32,13);c("þþþþþþþ");
 delay(200);

 tc(BLUE);
 g(35,10);c("þ");
 delay(200);
 g(34,11);c("þ þ");
 delay(200);
 g(33,12);c("þ   þ");
 delay(200);
 g(32,13);c("þþþþþþþ");
 delay(200);
 }



 if( shape == "Triangle" || shape == "triangle" ||  a == 3 )
 {
  tc(YELLOW);
 g(35,10);c("þ");
 delay(500);
 g(34,11);c("þ þ");
 delay(500);
 g(33,12);c("þ   þ");
 delay(500);
 g(32,13);c("þþþþþþþ");
 delay(500);

 tc(BLUE);
 g(35,10);c("þ");
 delay(500);
 g(34,11);c("þ þ");
 delay(500);
 g(33,12);c("þ   þ");
 delay(500);
 g(32,13);c("þþþþþþþ");
 delay(500);

  tc(RED);
 g(35,10);c("þ");
 delay(500);
 g(34,11);c("þ þ");
 delay(500);
 g(33,12);c("þ   þ");
 delay(500);
 g(32,13);c("þþþþþþþ");
 delay(500);
 }

 getch();
 return 0;
}