#include<iostream.h>
#include<conio.h>
int main()
{
  clrscr();
  int n;
  do
  {
  cout<<"Enter number (0 to end): ";
  cin>>n;
  cout<<"You entered: "<< n << "\n";
  }
  while(n!=0);
  return 0;
}