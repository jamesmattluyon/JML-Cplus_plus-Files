#include<iostream.h>
#include<conio.h>
int main()
{
 int input,numberBetween=0;
 clrscr();
 do
 {
  cout<<"Enter a number (0 to quit): ";
  cin>> input;
  if(input>=100 && input<=200)
  numberBetween++;
 }
 while (input !=0 );
 cout<<"Numbers between 100 and 200: "	<< numberBetween;
 getch();
 return 0;
}