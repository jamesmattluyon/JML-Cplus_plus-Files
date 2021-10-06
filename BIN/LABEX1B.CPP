#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 clrscr();
 double sales = 0.0, salary = 0.0;
 cout<<"Enter your sales amount $: ";
 cin>>sales;

 if(sales <= 0)
 {
 exit(-1);
 }
 else
 {
  salary = (sales * 0.09) + 200;
  cout<<"Salary this week is $"<<salary;
 }

 getch();
}