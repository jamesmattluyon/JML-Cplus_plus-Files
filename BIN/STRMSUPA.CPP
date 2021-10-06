#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
 clrscr();
 float a,b,c,d,e;
 fstream fin;
 ofstream fout("record.dat",ios::out);
 if(fout.fail())
 {
  cout<<"Output file opening failed. \n";
  exit(1);
 }
 else
 {
  cout<<"Determining the average temperature of 5 experiments\n";
  cout<<"Enter the temperature of experiment 1: ";
  cin>>a;
  cout<<"Enter the temperature of experiment 2: ";
  cin>>b;
  cout<<"Enter the temperature of experiment 3: ";
  cin>>c;
  cout<<"Enter the temperature of experiment 4: ";
  cin>>d;
  cout<<"Enter the temperature of experiment 5: ";
  cin>>e;
  cout<<"The average temperature is "<< (a+b+c+d+e)/5 <<" degrees "<< endl;

 }

 fout.close();

 getch();
}