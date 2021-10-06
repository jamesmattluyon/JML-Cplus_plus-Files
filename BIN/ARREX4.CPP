//This program illustrate the multidimensionalal array
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
int seat[3][3]={{0,0,1},{1,0,1},{1,1,0}};
cout<<"Seats "<<endl;
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 {
 cout<<seat[i][j]<<"\t";
 if(j==2)
 cout<<"\t";
 }
 cout<<endl;
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 if(seat[i][j]==1)
 cout<<"Row "<<(i+1)<<" Column "<<(j+1)<<" seat is occupied "<<endl;
getch();
}