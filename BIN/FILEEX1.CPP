//this program test for an existence of a file
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
int main()
{
char file_name[5];
int i;
cout<<"Enter file name(maximum of 10 characters)\n"<<"with three character extension\n"<<"Example: sample.dat"<<endl;
cin.getline(file_name,5);
cout<<"Ok! I will edit your file "<<file_name[5]<<endl;
ifstream in_stream;
in_stream.open (file_name);
if(in_stream.fail())
{
 cout<<"Input file opening failed.";
 exit(1);
}
getch();
return 0;
}