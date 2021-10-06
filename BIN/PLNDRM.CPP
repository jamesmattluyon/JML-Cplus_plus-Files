#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int top= -1, front = 0;
int i,choice;
int stack[50];
char string[50],p;
void push(char);
void pop();
void display();

void main()
{
 clrscr();
 while(1)
 {
  cout<<"\n1.Palindrome \n2.Exit \nEnter Choice: ";
  cin>>choice;
  switch(choice)
  {
   case 1:cout<<"Enter String: ";
	  gets(string);
	  for(i=0; stack[i] !='\0'; i++)
	  {
	   p = string[i];
	   push(p);
	  }
	  for(i=0; i< (strlen(string) / 2); i++)
	  {
	   if( stack[top] == stack[front])
	   {
	   pop();
	   front++;
	   }
	   else
	   {
	  cout<< string <<" is not palindrome" << endl;break;
	   }
	  }
	 if((strlen(string)/2) == front)
	 cout<< string <<" is palindrome" << endl;
	 front= 0;
	 top= -1;break;
     case 2: exit(0);
     default:cout<<"Invalid choice";break;
     }
   }
 }

void push(char a)
{
 top++;
 stack[top] = a;
}

void pop()
{
 top--;
}