//This program demonstrate the use of reference parameters
//versus value parameters
#include<iostream.h>
#include<conio.h>
void DisplayValue(int &w, int &x, int &y, int&z)
{
w++;
x--;
y++;
z--;
cout<<"Value of w : "<<w<<endl;
cout<<"Value of x : "<<x<<endl;
cout<<"Value of y : "<<y<<endl;
cout<<"Value of z : "<<z<<endl;
}
void main()
{int a=1,b=1,c=1,d=1;
clrscr();
DisplayValue(a,b,c,d);
cout<<"\nValue of a : "<<a<<endl;
cout<<"Value of b : "<<b<<endl;
cout<<"Value of c : "<<c<<endl;
cout<<"Value of d : "<<d<<endl;
getch();
}