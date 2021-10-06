#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
    int rows, i, j, space;
    clrscr();
    do
    {
    cout<<"Enter number of rows: ";
    cin>>rows;
    if(rows<25)
    for(i=rows; i>=1; --i)
    {
	for(space=0; space < rows-i; ++space)
	   {
	    cout<<"  ";
	   }
	for(j=i; j <= i; ++j)
	   {
	    cout<<"* ";
	   }
	for(j=0; j < i-1; ++j)
	   {
	    cout<<"* ";
	    cout<<"\n";
	   }
    }
    else
    {
     cout<<" Make it less than 25 ";
     cout<<"\n";
    }
    }
    while(rows>25);
    getch();
    
}
