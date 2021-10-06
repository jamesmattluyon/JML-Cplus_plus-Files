#include <iostream.h>
#include <conio.h>
void main()
{
 clrscr();
 char repassword[10],username[10],password[10],ch;
 int x;
 cout<<"Enter Username: ";
   for(x=0;x<10;x++)
   {
    ch = getch();
    if((ch>='a'&& ch <='z')||( ch >='A'&& ch<='Z')||(ch>='0'&&ch<='9'))
     {
      username[x]=ch;
      cout<<username[x];
     }
    else
     {
      while(x<10)
     {
       username[x]='\0';
       ++x;
     }
     break;
       }
	 }
	cout<<"\nEnter Password: ";
	for(x=0;x<10;x++)
	{
	ch=getch();
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
	{
	password[x]=ch;
	cout<<"*";
	}
	else
	{
	while(x<10)
	{
	password[x]='\0';
	++x;
	}
	break;
	}
	 }

	cout<<"\nRetype Password: ";
	for(x=0;x<10;x++)
	{
	ch=getch();
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
	{
	repassword[x]=ch;
	cout<<"*";
	}
	else
	{
	while(x<10)
	{
	repassword[x]='\0';
	++x;
	 }
	break;
	}
	}



	if((password[0]==repassword[0])&&(password[1]==repassword[1])&&(password[2]==repassword[2])&&
	 (password[3]==repassword[3])&&(password[4]==repassword[4])&&(password[5]==repassword[5])&&
	 (password[6]==repassword[6])&&(password[7]==repassword[7])&&(password[8]==repassword[8])
	 &&(password[9]==repassword[9]))
	{
	cout<<"\nYou have created an account\n";
	cout<<"Your Username is :";
	for(x=0;x<10;x++)
	{
	cout<<username[x];
	}
	cout<<"\nYour Password is :"<<password;
	}

	else{

	 cout<<"\nYou have enter wrong password";
	 }




	getch();
}
