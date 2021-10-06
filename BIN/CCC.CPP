#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 float ave,x[10],a,y=0;
 cout<<"Enter 10 numbers\n";
 for(a=0;a<10;a++)
 {
  cin>>x[a];
  y=y+x[a];
 }
 ave=y/10;
 cout<<"The Average is: "<<ave<<endl;
 cout<<"The numbers less than the average are:\n";
 for(a=0;a<10;a++)
 {
  if(ave>x[a])
  {cout<<x[a]<<'\n';}
 }
 getch();
 return 0;
}