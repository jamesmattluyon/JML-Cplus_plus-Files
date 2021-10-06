#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 int a,b,c=1,choice;
 char name[50];
 clrscr();
 cout<< endl <<" Choice from 1-3";
 cin>>choice;
 switch(choice)
{
 case 1:{cout<< endl <<" Enter your name ";
	 cin>>name;
	 cout<< endl <<" Hi :) "<< name;break;}
 case 2:{cout<< endl <<" Enter two values";
	 cin>> a>>b;
 if(a>b)
  cout<<a-b<<" Minues by the "<<a/b;
 else
  cout<<b+a<<" "<<b*a;break;}
 case 3:{cout<< endl <<" Enter a value ";
	 cin>> a;
	 for(b=1;b<=a;b++)
	 c*=b;
	 cout<<c;break;}
 default:{cout<<" Invalid choice..";break;}
}
getch();
}