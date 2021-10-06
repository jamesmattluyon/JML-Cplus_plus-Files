#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
clrscr();
FILE *fp, *ft;
char a,c;
struct clan
{
char name[50],codename[50];
char gender[10],add[100];
char number[20];
};
struct clan e;
char number[50];
long int recsize;
fp=fopen("c:/clan.txt","rb+");
if(fp==NULL) {
fp=fopen("c:/clan.txt","wb+");
if(fp==NULL)
{puts("Cannot open file");
return 0;}}
recsize=sizeof(e);
while(1) {
clrscr();
 gotoxy(23,5);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
 gotoxy(23,6);cout<<"³ þþþþþþ WELCOME TO MY CLAN þþþþþþ ³";
 gotoxy(23,7);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
 gotoxy(23,9);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(23,10);cout<<"³  1. Register                     ³";
gotoxy(23,11);cout<<"³  2. View List Member             ³";
gotoxy(23,12);cout<<"³  3. Edit Member Info             ³";
gotoxy(23,13);cout<<"³  4. Delete Member                ³";
gotoxy(23,14);cout<<"³  5. Search Member                ³";
gotoxy(23,15);cout<<"³  6. Exit                         ³";
gotoxy(23,16);cout<<"³                                  ³";
gotoxy(23,17);cout<<"³ Enter your choice :              ³";
gotoxy(23,18);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
fflush(stdin);
gotoxy(45,17);c=getche();
clrscr();
switch(c)
{case'1':
fseek(fp,0,SEEK_END);
a='Y';
while(a=='Y'||a=='y')
{clrscr();
gotoxy(20,10);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(20,11);cout<<"³ þþþþ CLAN REGISTRATION FORM þþþþ ³";
gotoxy(20,12);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(20,13);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(20,14);cout<<"³ Full Name :                       ³";
gotoxy(20,15);cout<<"³ Code Name :                       ³";
gotoxy(20,16);cout<<"³ Gender    :                       ³";
gotoxy(20,17);cout<<"³ Number    :                       ³";
gotoxy(20,18);cout<<"³ Address   :                       ³";
gotoxy(20,19);cout<<"³                                   ³";
gotoxy(20,20);cout<<"³ Register Another Member(y/n):     ³";
gotoxy(20,21);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(34,14);gets(e.name);
gotoxy(34,15);gets(e.codename);
gotoxy(34,16);cin>>e.gender;
gotoxy(34,17);cin>>e.number;
gotoxy(34,18);gets(e.add);
fwrite(&e,recsize,1,fp);
fflush(stdin);
gotoxy(52,20);a=getche();}
break;
case'2':
clrscr();
rewind(fp);
cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ";
cout<<"\n";
cout<<"Gender";
cout<<"\t\tCellNumber";
cout<<"\t\tCode Name";
cout<<endl;
cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ";
while(fread(&e,recsize,1,fp)==1){
cout<<e.gender;
cout<<"\t\t"<<e.number;
cout<<"\t\t"<<e.codename<<"\n";}
cout<<"\n";
getch();
break;
case'3' :
clrscr();
a='Y';
while(a=='Y'||a=='y')
{
gotoxy(20,10);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(20,11);cout<<"³ þþþþ CLAN EDIT MEMBER INFO þþþþ ³";
gotoxy(20,12);cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
gotoxy(20,13);cout<<"³ Number    :                     ³";
gotoxy(20,14);cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
gotoxy(20,15);cout<<"³ Full Name :                     ³";
gotoxy(20,16);cout<<"³ Code Name :                     ³";
gotoxy(20,17);cout<<"³ Gender    :                     ³";
gotoxy(20,18);cout<<"³ Number    :                     ³";
gotoxy(20,19);cout<<"³ Address   :                     ³";
gotoxy(20,20);cout<<"³                                 ³";
gotoxy(20,21);cout<<"³ Edit Another Member(y/n):       ³";
gotoxy(20,22);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(34,13);cin>>number;
rewind(fp);
while(fread(&e,recsize,1,fp)==1)
{if(strcmp(e.number,number)==0)
{gotoxy(34,15);gets(e.name);
gotoxy(34,16);gets(e.codename);
gotoxy(34,17);cin>>e.gender;
gotoxy(34,18);cin>>e.number;
gotoxy(34,19);gets(e.add);
fseek(fp,-recsize,SEEK_CUR);
fwrite(&e,recsize,1,fp);
break;}}
fflush(stdin);
gotoxy(48,21);a=getche();
}
break;
case'4':
clrscr();
a='Y';
while (a=='Y'||a=='y')
{
gotoxy(20,10);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(20,11);cout<<"³ þþþþ CLAN DELETE MEMBER INFO þþþþ ³";
gotoxy(20,12);cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
gotoxy(20,13);cout<<"³ Number    :                       ³";
gotoxy(20,14);cout<<"³                                   ³";
gotoxy(20,15);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(34,13);gets(number);
ft=fopen("c:/temp.dat","wb");
rewind(fp);
while(fread(&e,recsize,1,fp)==1)
if(strcmp(e.number,number)!=0)
{fwrite(&e,recsize,1,ft);}
fclose(fp);
fclose(ft);
remove("c:/clan.txt");
rename("c:/temp.dat","c:/clan.txt");
fp=fopen("c:/clan.txt","rb+");
gotoxy(22,14);cout<<"Delete Another Member (y/n):";
fflush(stdin);
gotoxy(50,14);a=getche();
}
break;
case'5':
clrscr();
a='Y';
while (a=='Y'||a=='y')
{clrscr();
gotoxy(20,10);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(20,11);cout<<"³       SEARCH CLAN MEMBER       ³";
gotoxy(20,12);cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
gotoxy(20,13);cout<<"³ Enter No. :                    ³";
gotoxy(20,14);cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
gotoxy(20,15);cout<<"³ Full Name :                    ³";
gotoxy(20,16);cout<<"³ Code Name :                    ³";
gotoxy(20,17);cout<<"³ Gender    :                    ³";
gotoxy(20,18);cout<<"³ Number    :                    ³";
gotoxy(20,19);cout<<"³ Address   :                    ³";
gotoxy(20,20);cout<<"³                                ³";
gotoxy(20,21);cout<<"³ Search Another Member(y/n):    ³";
gotoxy(20,22);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(34,13);cin>>number;
rewind(fp);
 while(fread(&e,recsize,1,fp) == 1)
 {
  if(strcmp(e.number,number) == 0)
  {
   gotoxy(34,15);cout<<e.name;
   gotoxy(34,16);cout<<e.codename;
   gotoxy(34,17);cout<<e.gender;
   gotoxy(34,18);cout<<e.number;
   gotoxy(34,19);cout<<e.add;
  }
 }
	fflush(stdin);
	gotoxy(50,21);a=getche();
	}break;
	 case'6': fclose(fp);
	 exit(0);}
}
return 0;
}