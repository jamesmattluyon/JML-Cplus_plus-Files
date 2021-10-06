#include<stdio.h>
#include<conio.h>
void passwd(char *ar, int max)
{
 char ch; 
 int x=0;
 while(1)
 {
   ch=getch();
   if(ch==13)
   {
     ar[x]='\0';
     break;
   }
   if(ch==8 && x!=0)
   {
     printf("\b \b");
     if(x<=max && x>0)
     x--;
   }
   else
   if(x<max && ch!=8)
   {
     cprintf("*");
     ar[x]=ch;
     x++;
   }
  }
}

void main()
{
  char u[15],ps[11];
  clrscr();
  printf("\n\tEnter User Name: ");
  gets(u);
  printf("\tEnter Password: ");

  passwd(ps,10);

  printf("\n\n\tUser Name: %s",u);
  printf("\n\tPassword: %s", ps);
  getch();
}

