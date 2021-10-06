#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
    int rows,space,ctr,n;
    clrscr();
    do
    {
    cout<<"Enter number a rows";
    cin>>rows;
    if(rows<25)
    {
	for(ctr=rows; ctr>=1; --ctr)
	{
		for(space=0; space < rows-ctr; ++space)
			cout<<"  ";

		for(n=ctr; n <= 2*ctr-1; ++n)
			cout<<"* ";

		for(n=0; n < ctr-1; ++n)
			cout<<"* ";

		cout<<"\n";
	}
    }
    else
    {
	cout<<"please make it less than 25";
	cout<<"\n";
    }
    }
    while(rows<25);
    getch();

}