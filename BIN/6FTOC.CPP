#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 double fah,cel;
 cel=0;
 cout<<"Pls input 6 integers."<<endl;
 for(int x=0;x<6;x++)
 {
 cout<<"input fahrenheight: ";
 cin>>fah;
 cel=(fah-32)*5/9;
 cout<<"Celsius equivalent is "<<cel<<" degrees"<< endl;
 }
 getch();
}
