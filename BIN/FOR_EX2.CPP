#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int c;
 cout<<"Number\tSquare\tCube\n";
 for(c = 1; c <= 6; c++)
 {
  cout<< c <<"\t"<<c*c<<"\t"<<c*c*c<< endl;
 }
 getch();
 return 0;
}