//This program demonstrate the use of parameters
#include<iostream.h>
#include<conio.h>
void Exchange(int &num1, int &num2)
{
int value1, value2;
clrscr();
cout<<"Enter first value: ";
cin>>num1;
cout<<"Enter second value: ";
cin>>num2;
cout<<"Value before exchange"<<endl;
cout<<"First Value : "<<num1<<endl;
cout<<"Second Value : "<<num2<<endl;
}
void main()
{
int value1, value2;
clrscr();
Exchange( value1, value2); //exchange values
cout<<"Value after exchange\n";
cout<<"First Value : "<<value2<<endl;
cout<<"Second Value : "<<value1<<endl;
getch();
}