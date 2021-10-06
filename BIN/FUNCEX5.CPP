//This program demonstrate function prototyping
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#define PI 3.1415927
double Area(double r);
double circumference(double r);
double Area(double r)
{
return(PI*r*r);
}
double Circumference(double r)
{
return(2*PI*r);
}
void main()
{double radius, a, c;
clrscr( );
cout<<"Enter radius: ";
cin>>radius;
a=Area(radius);
c=Circumference(radius);
cout.setf(ios::fixed);
cout.precision(2);
cout<<"The circumference of the circle is "<<c<<endl;
cout<<"The area of the circle is "<<a<<endl;
getch();
}