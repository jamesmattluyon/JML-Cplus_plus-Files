#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#define g gotoxy
#define tc textcolor
void main()
{
 clrscr();
 int choice;
 float deposit,withdraw,pin;
 cout<<"\nCPE 	BANK\n";
 cout<<"Enter your pin number\n";cin>>pin;
 cout<<"Access passed\n";
 cout<<"1. Deposit\n";
 cout<<"2. Withdraw\n";
 cout<<"3. Check Balance\n";
 switch(choice)
 {
  case 1: cout<<"How much you'll deposit\n";cin>>deposit;break;
  case 2: cout<<"How much you'll withdraw\n";cin>>withdraw;
	  deposit = deposit - withdraw;break;
  case 3: cout<<"Your balance is " << deposit;break;
  default: cout<<" Invalid choice ";break;}

 getch();
}