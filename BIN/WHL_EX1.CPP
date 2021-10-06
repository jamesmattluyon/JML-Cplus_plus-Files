#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int x = 1;
 while( x < 10 )
 {
   if(x==5)
   break;
   cout<< x <<" ";
   x++;
 }
 cout<<"\nBroke out the loop at x of "<< x << endl;
 getch();
 return 0;
}