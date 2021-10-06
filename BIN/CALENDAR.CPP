#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#define g gotoxy
#define tc textcolor
#define tb textbackground
#define c cprintf
void main()
{
 tc(YELLOW);
 clrscr();
 char key;
 int x=6,y=5;
 g(2,1) ;cout<<"_______________________________________________________________";
 g(2,2) ;cout<<"|                           October                           |";
 g(2,3) ;cout<<"...............................................................";
 g(2,4) ;cout<<".       .        .        .        .        .        .        .";
 g(2,5) ;cout<<".   1   .    2   .    3   .    4   .    5   .    6   .    7   .";
 g(2,6) ;cout<<"...............................................................";
 g(2,7) ;cout<<".       .        .        .        .        .        .        .";
 g(2,8) ;cout<<".   8   .    9   .   10   .   11   .   12   .   13   .   14   .";
 g(2,9) ;cout<<"...............................................................";
 g(2,10);cout<<".       .        .        .        .        .        .        .";
 g(2,11);cout<<".  15   .   16   .   17   .   18   .   19   .   20   .   21   .";
 g(2,12);cout<<"...............................................................";
 g(2,13);cout<<".       .        .        .        .        .        .        .";
 g(2,14);cout<<".  22   .   23   .   24   .   25   .   26   .   27   .   28   .";
 g(2,15);cout<<"...............................................................";
 g(2,16);cout<<".       .        .        . Note:                             .";
 g(2,17);cout<<".  29   .   30   .   31   .                                   .";
 g(2,18);cout<<"...............................................................";
 do
 {
  key = getch();

  switch(key)
 {
  case 'W':
  case 'w':
       if( y > 5)
       y=y-3;

       if( x == 6 && y == 5)
       {
	tc(BLUE);
	g(6,5);c("1");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(6,5);c("1");
       }

       if( x == 15 && y == 5)
       {
	tc(BLUE);
	g(15,5);c("2");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(15,5);c("2");
       }
       if( x == 24 && y == 5)
       {
	tc(BLUE);
	g(24,5);c("3");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(24,5);c("3");
       }
       if( x == 33 && y == 5)
       {
	tc(BLUE);
	g(33,5);c("4");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(33,5);c("4");
       }
       if( x == 42 && y == 5)
       {
	tc(BLUE);
	g(42,5);c("5");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(42,5);c("5");
       }
       if( x == 51 && y == 5)
       {
	tc(BLUE);
	g(51,5);c("6");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(51,5);c("6");
       }
       if( x == 60 && y == 5)
       {
	tc(BLUE);
	g(60,5);c("7");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(60,5);c("7");
       }

       if( x == 6 && y == 8)
       {
	tc(BLUE);
	g(6,8);c("8");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(6,8);c("8");
       }

       if( x == 15 && y == 8)
       {
	tc(BLUE);
	g(15,8);c("9");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(15,8);c("9");
       }
       if( x == 24 && y == 8)
       {
	tc(BLUE);
	g(23,8);c("10");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,8);c("10");
       }
       if( x == 33 && y == 8)
       {
	tc(BLUE);
	g(32,8);c("11");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,8);c("11");
       }
       if( x == 42 && y == 8)
       {
	tc(BLUE);
	g(41,8);c("12");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,8);c("12");
       }
       if( x == 51 && y == 8)
       {
	tc(BLUE);
	g(50,8);c("13");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,8);c("13");
       }
       if( x == 60 && y == 8)
       {
	tc(BLUE);
	g(59,8);c("14");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,8);c("14");
       }
       if( x == 6 && y == 11)
       {
	tc(BLUE);
	g(5,11);c("15");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,11);c("15");
       }

       if( x == 15 && y == 11)
       {
	tc(BLUE);
	g(14,11);c("16");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,11);c("16");
       }
       if( x == 24 && y == 11)
       {
	tc(BLUE);
	g(23,11);c("17");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,11);c("17");
       }
       if( x == 33 && y == 11)
       {
	tc(BLUE);
	g(32,11);c("18");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,11);c("18");
       }
       if( x == 42 && y == 11)
       {
	tc(BLUE);
	g(41,11);c("19");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,11);c("19");
       }
       if( x == 51 && y == 11)
       {
	tc(BLUE);
	g(50,11);c("20");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,11);c("20");
       }
       if( x == 60 && y == 11)
       {
	tc(BLUE);
	g(59,11);c("21");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,11);c("21");
       }
       if( x == 6 && y == 14)
       {
	tc(BLUE);
	g(5,14);c("22");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,14);c("22");
       }

       if( x == 15 && y == 14)
       {
	tc(BLUE);
	g(14,14);c("23");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,14);c("23");
       }
       if( x == 24 && y == 14)
       {
	tc(BLUE);
	g(23,14);c("24");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,14);c("24");
       }
       if( x == 33 && y == 14)
       {
	tc(BLUE);
	g(32,14);c("25");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,14);c("25");
       }
       if( x == 42 && y == 14)
       {
	tc(BLUE);
	g(41,14);c("26");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,14);c("26");
       }
       if( x == 51 && y == 14)
       {
	tc(BLUE);
	g(50,14);c("27");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,14);c("27");
       }
       if( x == 60 && y == 14)
       {
	tc(BLUE);
	g(59,14);c("28");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,14);c("28");
       }
       if( x == 6 && y == 17)
       {
	tc(BLUE);
	g(5,17);c("29");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,17);c("29");
       }

       if( x == 15 && y == 17)
       {
	tc(BLUE);
	g(14,17);c("30");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,17);c("30");
       }
       if( x == 24 && y == 17)
       {
	tc(BLUE);
	g(23,17);c("31");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(23,17);c("31");
       }
       break;
     
  case 'A':
  case 'a':
	if ( x > 6 )
       
	x=x-9;
	if( x == 6 && y == 5)
       {
	tc(BLUE);
	g(6,5);c("1");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(6,5);c("1");
       }

       if( x == 15 && y == 5)
       {
	tc(BLUE);
	g(15,5);c("2");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(15,5);c("2");
       }
       if( x == 24 && y == 5)
       {
	tc(BLUE);
	g(24,5);c("3");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(24,5);c("3");
       }
       if( x == 33 && y == 5)
       {
	tc(BLUE);
	g(33,5);c("4");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(33,5);c("4");
       }
       if( x == 42 && y == 5)
       {
	tc(BLUE);
	g(42,5);c("5");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(42,5);c("5");
       }
       if( x == 51 && y == 5)
       {
	tc(BLUE);
	g(51,5);c("6");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(51,5);c("6");
       }
       if( x == 60 && y == 5)
       {
	tc(BLUE);
	g(60,5);c("7");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(60,5);c("7");
       }

       if( x == 6 && y == 8)
       {
	tc(BLUE);
	g(6,8);c("8");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(6,8);c("8");
       }

       if( x == 15 && y == 8)
       {
	tc(BLUE);
	g(15,8);c("9");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(15,8);c("9");
       }
       if( x == 24 && y == 8)
       {
	tc(BLUE);
	g(23,8);c("10");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,8);c("10");
       }
       if( x == 33 && y == 8)
       {
	tc(BLUE);
	g(32,8);c("11");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,8);c("11");
       }
       if( x == 42 && y == 8)
       {
	tc(BLUE);
	g(41,8);c("12");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,8);c("12");
       }
       if( x == 51 && y == 8)
       {
	tc(BLUE);
	g(50,8);c("13");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,8);c("13");
       }
       if( x == 60 && y == 8)
       {
	tc(BLUE);
	g(59,8);c("14");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,8);c("14");
       }
       if( x == 6 && y == 11)
       {
	tc(BLUE);
	g(5,11);c("15");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,11);c("15");
       }

       if( x == 15 && y == 11)
       {
	tc(BLUE);
	g(14,11);c("16");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,11);c("16");
       }
       if( x == 24 && y == 11)
       {
	tc(BLUE);
	g(23,11);c("17");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,11);c("17");
       }
       if( x == 33 && y == 11)
       {
	tc(BLUE);
	g(32,11);c("18");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,11);c("18");
       }
       if( x == 42 && y == 11)
       {
	tc(BLUE);
	g(41,11);c("19");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,11);c("19");
       }
       if( x == 51 && y == 11)
       {
	tc(BLUE);
	g(50,11);c("20");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,11);c("20");
       }
       if( x == 60 && y == 11)
       {
	tc(BLUE);
	g(59,11);c("21");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,11);c("21");
       }
       if( x == 6 && y == 14)
       {
	tc(BLUE);
	g(5,14);c("22");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,14);c("22");
       }

       if( x == 15 && y == 14)
       {
	tc(BLUE);
	g(14,14);c("23");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,14);c("23");
       }
       if( x == 24 && y == 14)
       {
	tc(BLUE);
	g(23,14);c("24");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,14);c("24");
       }
       if( x == 33 && y == 14)
       {
	tc(BLUE);
	g(32,14);c("25");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,14);c("25");
       }
       if( x == 42 && y == 14)
       {
	tc(BLUE);
	g(41,14);c("26");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,14);c("26");
       }
       if( x == 51 && y == 14)
       {
	tc(BLUE);
	g(50,14);c("27");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,14);c("27");
       }
       if( x == 60 && y == 14)
       {
	tc(BLUE);
	g(59,14);c("28");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,14);c("28");
       }
       if( x == 6 && y == 17)
       {
	tc(BLUE);
	g(5,17);c("29");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,17);c("29");
       }

       if( x == 15 && y == 17)
       {
	tc(BLUE);
	g(14,17);c("30");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,17);c("30");
       }
       if( x == 24 && y == 17)
       {
	tc(BLUE);
	g(23,17);c("31");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(23,17);c("31");
       }
       break;
       
  case 'S':
  case 's':
       if ( y < 15 )
       y=y+3;

	if( x == 6 && y == 5)
       {
	tc(BLUE);
	g(6,5);c("1");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(6,5);c("1");
       }

       if( x == 15 && y == 5)
       {
	tc(BLUE);
	g(15,5);c("2");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(15,5);c("2");
       }
       if( x == 24 && y == 5)
       {
	tc(BLUE);
	g(24,5);c("3");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(24,5);c("3");
       }
       if( x == 33 && y == 5)
       {
	tc(BLUE);
	g(33,5);c("4");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(33,5);c("4");
       }
       if( x == 42 && y == 5)
       {
	tc(BLUE);
	g(42,5);c("5");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(42,5);c("5");
       }
       if( x == 51 && y == 5)
       {
	tc(BLUE);
	g(51,5);c("6");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(51,5);c("6");
       }
       if( x == 60 && y == 5)
       {
	tc(BLUE);
	g(60,5);c("7");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(60,5);c("7");
       }

       if( x == 6 && y == 8)
       {
	tc(BLUE);
	g(6,8);c("8");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(6,8);c("8");
       }

       if( x == 15 && y == 8)
       {
	tc(BLUE);
	g(15,8);c("9");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(15,8);c("9");
       }
       if( x == 24 && y == 8)
       {
	tc(BLUE);
	g(23,8);c("10");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,8);c("10");
       }
       if( x == 33 && y == 8)
       {
	tc(BLUE);
	g(32,8);c("11");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,8);c("11");
       }
       if( x == 42 && y == 8)
       {
	tc(BLUE);
	g(41,8);c("12");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,8);c("12");
       }
       if( x == 51 && y == 8)
       {
	tc(BLUE);
	g(50,8);c("13");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,8);c("13");
       }
       if( x == 60 && y == 8)
       {
	tc(BLUE);
	g(59,8);c("14");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,8);c("14");
       }
       if( x == 6 && y == 11)
       {
	tc(BLUE);
	g(5,11);c("15");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,11);c("15");
       }

       if( x == 15 && y == 11)
       {
	tc(BLUE);
	g(14,11);c("16");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,11);c("16");
       }
       if( x == 24 && y == 11)
       {
	tc(BLUE);
	g(23,11);c("17");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,11);c("17");
       }
       if( x == 33 && y == 11)
       {
	tc(BLUE);
	g(32,11);c("18");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,11);c("18");
       }
       if( x == 42 && y == 11)
       {
	tc(BLUE);
	g(41,11);c("19");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,11);c("19");
       }
       if( x == 51 && y == 11)
       {
	tc(BLUE);
	g(50,11);c("20");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,11);c("20");
       }
       if( x == 60 && y == 11)
       {
	tc(BLUE);
	g(59,11);c("21");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,11);c("21");
       }
       if( x == 6 && y == 14)
       {
	tc(BLUE);
	g(5,14);c("22");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,14);c("22");
       }

       if( x == 15 && y == 14)
       {
	tc(BLUE);
	g(14,14);c("23");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,14);c("23");
       }
       if( x == 24 && y == 14)
       {
	tc(BLUE);
	g(23,14);c("24");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,14);c("24");
       }
       if( x == 33 && y == 14)
       {
	tc(BLUE);
	g(32,14);c("25");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,14);c("25");
       }
       if( x == 42 && y == 14)
       {
	tc(BLUE);
	g(41,14);c("26");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,14);c("26");
       }
       if( x == 51 && y == 14)
       {
	tc(BLUE);
	g(50,14);c("27");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,14);c("27");
       }
       if( x == 60 && y == 14)
       {
	tc(BLUE);
	g(59,14);c("28");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,14);c("28");
       }
       if( x == 6 && y == 17)
       {
	tc(BLUE);
	g(5,17);c("29");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,17);c("29");
       }

       if( x == 15 && y == 17)
       {
	tc(BLUE);
	g(14,17);c("30");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,17);c("30");
       }
       if( x == 24 && y == 17)
       {
	tc(BLUE);
	g(23,17);c("31");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(23,17);c("31");
       }
       break;

  case 'D':
  case 'd':
       if ( x < 60 )

       x=x+9;
       if( x == 6 && y == 5)
       {
	tc(BLUE);
	g(6,5);c("1");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(6,5);c("1");
       }

       if( x == 15 && y == 5)
       {
	tc(BLUE);
	g(15,5);c("2");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(15,5);c("2");
       }
       if( x == 24 && y == 5)
       {
	tc(BLUE);
	g(24,5);c("3");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(24,5);c("3");
       }
       if( x == 33 && y == 5)
       {
	tc(BLUE);
	g(33,5);c("4");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(33,5);c("4");
       }
       if( x == 42 && y == 5)
       {
	tc(BLUE);
	g(42,5);c("5");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(42,5);c("5");
       }
       if( x == 51 && y == 5)
       {
	tc(BLUE);
	g(51,5);c("6");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(51,5);c("6");
       }
       if( x == 60 && y == 5)
       {
	tc(BLUE);
	g(60,5);c("7");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(60,5);c("7");
       }

       if( x == 6 && y == 8)
       {
	tc(BLUE);
	g(6,8);c("8");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(6,8);c("8");
       }

       if( x == 15 && y == 8)
       {
	tc(BLUE);
	g(15,8);c("9");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(15,8);c("9");
       }
       if( x == 24 && y == 8)
       {
	tc(BLUE);
	g(23,8);c("10");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,8);c("10");
       }
       if( x == 33 && y == 8)
       {
	tc(BLUE);
	g(32,8);c("11");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,8);c("11");
       }
       if( x == 42 && y == 8)
       {
	tc(BLUE);
	g(41,8);c("12");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,8);c("12");
       }
       if( x == 51 && y == 8)
       {
	tc(BLUE);
	g(50,8);c("13");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,8);c("13");
       }
       if( x == 60 && y == 8)
       {
	tc(BLUE);
	g(59,8);c("14");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,8);c("14");
       }
       if( x == 6 && y == 11)
       {
	tc(BLUE);
	g(5,11);c("15");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,11);c("15");
       }

       if( x == 15 && y == 11)
       {
	tc(BLUE);
	g(14,11);c("16");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,11);c("16");
       }
       if( x == 24 && y == 11)
       {
	tc(BLUE);
	g(23,11);c("17");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,11);c("17");
       }
       if( x == 33 && y == 11)
       {
	tc(BLUE);
	g(32,11);c("18");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,11);c("18");
       }
       if( x == 42 && y == 11)
       {
	tc(BLUE);
	g(41,11);c("19");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,11);c("19");
       }
       if( x == 51 && y == 11)
       {
	tc(BLUE);
	g(50,11);c("20");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,11);c("20");
       }
       if( x == 60 && y == 11)
       {
	tc(BLUE);
	g(59,11);c("21");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,11);c("21");
       }
       if( x == 6 && y == 14)
       {
	tc(BLUE);
	g(5,14);c("22");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,14);c("22");
       }

       if( x == 15 && y == 14)
       {
	tc(BLUE);
	g(14,14);c("23");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,14);c("23");
       }
       if( x == 24 && y == 14)
       {
	tc(BLUE);
	g(23,14);c("24");
	g(42,16);c("NOCLASS");
       }
       else
       {
	tc(YELLOW);
	g(23,14);c("24");
       }
       if( x == 33 && y == 14)
       {
	tc(BLUE);
	g(32,14);c("25");
	g(42,16);c("HOLIDAY");
       }
       else
       {
	tc(YELLOW);
	g(32,14);c("25");
       }
       if( x == 42 && y == 14)
       {
	tc(BLUE);
	g(41,14);c("26");
	g(42,16);c("ROAMING");
       }
       else
       {
	tc(YELLOW);
	g(41,14);c("26");
       }
       if( x == 51 && y == 14)
       {
	tc(BLUE);
	g(50,14);c("27");
	g(42,16);c("JOGGING");
       }
       else
       {
	tc(YELLOW);
	g(50,14);c("27");
       }
       if( x == 60 && y == 14)
       {
	tc(BLUE);
	g(59,14);c("28");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(59,14);c("28");
       }
       if( x == 6 && y == 17)
       {
	tc(BLUE);
	g(5,17);c("29");
	g(42,16);c("RESTDAY");
       }
       else
       {
	tc(YELLOW);
	g(5,17);c("29");
       }

       if( x == 15 && y == 17)
       {
	tc(BLUE);
	g(14,17);c("30");
	g(42,16);c("PRESENT");
       }
       else
       {
	tc(YELLOW);
	g(14,17);c("30");
       }
       if( x == 24 && y == 17)
       {
	tc(BLUE);
	g(23,17);c("31");
	g(42,16);c("ROUTINE");
       }
       else
       {
	tc(YELLOW);
	g(23,17);c("31");
       }
       break;
      }

 g(x,y);

 }
 while (key != 'x');
 getch();
}
