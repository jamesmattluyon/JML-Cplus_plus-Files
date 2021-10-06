#include<iostream.h>
#include<conio.h>
#include<math.h>
int main ()
{
  clrscr();
  float x,y;
  cout<<"Angle\nin Degrees\t"<<"sin x     \t"<<"cos x     \t"<<"tan x     \t";
  for(y=0;y<=20;y++)
  {
   x=(y*3.14159)/180;
   cout<<'\n'<<y<<"        "<<'\t'<<sin(x)<<"       "<<'\t'<<cos(x)<<"       "<<'\t'<<tan(x)<<"       "<<'\t';
  }
  getch();
  return 0;
  }