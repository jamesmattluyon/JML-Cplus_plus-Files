#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void calendar();
int x=7; //37
int y=4; //12
int main()
{
 clrscr();
 struct Note{char n[34];};
 Note notes[32];
 char key;
 int date = 1;
 calendar();

 do{
 gotoxy(x,y);
 textcolor(YELLOW);
 switch (date) {
case 1: cprintf("1");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 2: cprintf("2");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 3: cprintf("3");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 4: cprintf("4");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 5: cprintf("5");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 6: cprintf("6");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 7: cprintf("7");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 8: cprintf("8");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 9: cprintf("9");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 10: cprintf("10");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 11: cprintf("11");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 12: cprintf("12");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 13: cprintf("13");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 14: cprintf("14");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 15: cprintf("15");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 16: cprintf("16");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 17: cprintf("17");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 18: cprintf("18");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 19: cprintf("19");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 20: cprintf("20");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 21: cprintf("21");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 22: cprintf("22");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 23: cprintf("23");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 24: cprintf("24");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 25: cprintf("25");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 26: cprintf("26");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 27: cprintf("27");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 28: cprintf("28");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 29: cprintf("29");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 30: cprintf("30");gotoxy(44,12);cprintf(notes[date - 1].n);break;
case 31: cprintf("31");gotoxy(44,12);cprintf(notes[date - 1].n);break;

}
gotoxy(x,y);
key = getch();
switch (key) {
case 'w': if(!(date >=1 && date <= 7)){
	  y=y-2;date = date - 7; } break;
case 'a': if(!((date-1)%7==0)){
	  x=x-11;date = date - 1; } break;
case 's': if(!(date>=25 && date <=28) && !(date >= 29 && date <=31)) {
	  y=y+2;date = date + 7; } break;
case 'd': if(!((date)%7==0) && !(date==31)) {
	  x=x+11;date = date + 1; } break;
case 'n': gotoxy(44,12);textcolor(YELLOW);cout<<"              ";
	  gotoxy(44,12);cin.getline(notes[date-1].n,34);break;
}
 calendar();
} while(key!='x');
return 0;
}

void calendar()
{
 gotoxy(1,1);
 textcolor(CYAN);
 cprintf("DATE: March ");
 gotoxy(37,12);
 cprintf("NOTES: ");
 gotoxy(x,y);
}