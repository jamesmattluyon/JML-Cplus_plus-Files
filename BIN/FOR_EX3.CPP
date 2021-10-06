#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int i,smallest,x;
 for(i=0;i<10;i++)
 {
  cout<<"Type an integer: ";
  cin>>x;
  if(i==0)
  smallest=x;
  else if(x<smallest)
  smallest=x;
 }
 cout<<"The smallest values is: "<< smallest << endl;
 getch();
 return 0;
}