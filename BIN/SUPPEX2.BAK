#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

double calculateSphere(float radius)
{
 cout<<"\nEnter radius: ";
 cin>>radius;
 float sphere = (1.33333333*M_PI*(radius*radius*radius));
 return sphere;
}

double calculatePrism(double base, double height, double length)
{
 cout<<"\nEnter base: ";
 cin>>base;
 cout<<"Enter height: ";
 cin>>height;
 cout<<"Enter length: ";
 cin>>length;
 double prism = (base*length*height);
 return prism;
}

double calculateCone(double radius, double height)
{
 cout<<"\nEnter radius:  ";
 cin>>radius;
 cout<<"Enter height:  ";
 cin>>height;
 double cone = (M_PI*(radius*radius)*height/3);
 return cone;
}

double calculateCube(double area)
{
 cout<<"\nEnter area: ";
 cin>>area;
 double a=area*area*area;
 return a;
}

void main()
{
 clrscr();
 int ans;
 double rad,bas,hei,area,len;
 while(ans!=0)
 {
  cout<<"\n\nPress 0 to Exit";
  cout<<"\nChoose shape: 1-Sphere, 2-Prism, 3-Cone, 4-Cube: ";
  cin>>ans;
  if(ans==1)
  {
   cout<<"The volume is "<<calculateSphere(rad);
  }
  else if(ans==2)
  {
   cout<<"The volume is "<<calculatePrism(bas,hei,len);
  }
  else if(ans==3)
  {
   cout<<"The volume is "<<calculateCone(rad,hei);
  }
  else if(ans==4)
  {
   cout<<"The volume is "<<calculateCube(area);
  }
  else
  {
   cout<<"Invalid choice";
  }
 }
}