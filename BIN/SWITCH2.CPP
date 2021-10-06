#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 char LtrGrade;
 cout<<"Enter a letter grade:";
 cin>>LtrGrade;
 switch(LtrGrade)
 {
  case 'a':
  case 'A':
	   cout<<"\nExcellent";
	   break;
  case 'b':
  case 'B':
	   cout<<"\nSuperior";
	   break;
  case 'c':
  case 'C':
	   cout<<"\nAverage";
	   break;
  case 'd':
  case 'D':
	   cout<<"\nPoor";
	   break;
  case 'e':
  case 'E':
	   cout<<"\nTry Again";
	   break;
  default:
	   cout<<"\nNo match was found for the ENRTRY" << LtrGrade << endl;
  }
  getch();
  return 0;
}