// This program illustrate the use of arrays in sorting
#include<iostream.h>
#include<conio.h>
int main(int num[5])
{
 clrscr();
 int maxval,Pos,maxpos;
 maxval=num[0];
 maxpos=0;
 for(Pos=1;Pos<5;Pos++)
 if(num[Pos]>maxval)
 {
 maxval=num[Pos];
 maxpos=Pos;
 }
 cout<<"The largest integers is the integer no. "<<(maxpos+1)<<endl;
 getch();
 return maxval;
}