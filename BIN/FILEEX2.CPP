// This program obtains the size of a file
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
const char *filename = "example.txt";
int main()
{
clrscr();
long int l,m;
ifstream file("filename",ios::in||ios::binary);
l = file.tellg();
file.seekg(0,ios::end);
m = file.tellg();
file.close();
cout<<"size of "<<filename;
cout<<" is "<<(m-l)<<" bytes.\n";
getch();
return 0;
}