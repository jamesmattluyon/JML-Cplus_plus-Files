#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int code;
 cout<<"Enter a code: ";
 cin>>code;
 switch(code)
 {
  case 1:
	 cout<<"\nFirst Year";
	 break;
  case 2:
	 cout<<"\nSecond Year";
	 break;
  case 3:
	 cout<<"\nThird Year";
	 break;
  case 4:
	 cout<<"\nFourth Year";
	 break;
  case 5:
	 cout<<"\nFifth Year";
	 break;
  default:
	 cout<<"\nNot in the choices";
  }
  getch();
  return 0;
}