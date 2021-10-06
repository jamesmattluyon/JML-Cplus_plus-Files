#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<stdio.h>
void main()
{
 clrscr();
 ifstream fin;
 ofstream fout;
 fin.open("infile.dat");
 if(!fin.fail())
 {
 cout<<"Input file opening failed.\n";
 exit(1);
 }
 int first, second, third;
 cin>> first>> second>> third;
 cout<<"The sum of the first three number\n"<<"is "<< first + second + third <<endl;
 fout.close();
 fin.close();
 getch();
 }