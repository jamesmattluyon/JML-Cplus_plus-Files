#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void lines()
{
    textbackground(1);
    clrscr();
    textcolor(11);
    window(19,1,51,24);
    for(int x=0;x<24;x++)
    cprintf("³                              ³ ");
    cprintf("³                              ³");
    window(55,6,77,19);
    cprintf("  Instructions         \n");
    cprintf("Press Left and Right   ");
    cprintf("arrow keys to turn/move\n");
    cprintf("Press P to Pause       \n");
    cprintf("Press X to exit");
    window(55,18,79,20);
    cprintf("SCORE 10000");
    window(55,20,79,24);
    cprintf("GAME OVER");
}
int strt[3],dwn[3],end[3];
int cars[3],go=0,speed;
void score(int s=1)
{
    static unsigned int scr=0;
    if (s==0)
    {
        scr=0;
        return;
    }
    textcolor(WHITE);
    window(61,18,70,23);
    cprintf("        ");
    window(61,18,70,23);
    cprintf("%d",++scr);
    textcolor(11);
    for (int x=1;x<=10;x++)
    if(scr>=x*100 && speed>20)
        speed--;
 
}
void status(int s)
{
    textcolor(WHITE);
    window(55,20,65,21);
    switch(s)
    {
        case 1 : cprintf("Playing..."); break;
        case 2 : cprintf("Paused    "); break;
        case 3 : cprintf("Game Over ");
    }
    textcolor(11);
}
void myc(int x)
{
    int i;
    textcolor(10);
    window(20+(x*10),21,29+(x*10),25);
    cprintf("  ²²²²²²  ");
    cprintf("Þ²²²²²²²²Ý");
    cprintf(" ²²Ý²²Þ²² ");
    cprintf("Þ²²Ý²²Þ²²Ý");
    textcolor(WHITE);
    delay(10);
    if (x==0 || x==2)
    {
        x=1;
        window(20+(x*10),21,29+(x*10),25);
        for(i=0;i<4;i++)
        cprintf("          ");
    }
    else
    {
        x=0;
        window(20+(x*10),21,29+(x*10),25);
        for(i=0;i<4;i++)
        cprintf("          ");
        x=2;
        window(20+(x*10),21,29+(x*10),25);
        for(i=0;i<4;i++)
        cprintf("          ");
    }
 
}
void dc(int x, int car)
{
 
    if(strt[x]==25)
    {
        strt[x]=1;
        dwn[x]=1;
        end[x]=1;
    }
    if(strt[x]<10)
    window(20+(x*10),1,29+(x*10),5);
 
    textcolor(12);
    if(end[x]>0)
    {
        window(20+(x*10),end[x]+20,29+(x*10),25);
        if(end[x]==1){
        cprintf("          ");
        cprintf("Þ²²²²²²²²Ý");
        cprintf(" ²²²²²²²² ");
        cprintf("Þ²²²²²²²²Ý");
        }
        else if(end[x]==2)
        {
        cprintf("          ");
        cprintf("Þ²²²²²²²²Ý");
        cprintf(" ²²²²²²²² ");
        }
        else if(end[x]==3)
        {
        cprintf("          ");
        cprintf("Þ²²²²²²²²Ý");
        }
        else
        {
        cprintf("          ");
        end[x]=-1;
        strt[x]=0;
        cars[x]=0;
        }
        end[x]++;
    }
    else
    if(strt[x]>=5)
    {
    window(20+(x*10),dwn[x],29+(x*10),dwn[x]+5);
    cprintf("          ");
    cprintf("Þ²²²²²²²²Ý");
    cprintf(" ²²²²²²²² ");
    cprintf("Þ²²²²²²²²Ý");
    cprintf("  ²²²²²²  ");
    dwn[x]++;
    }
    else if(strt[x]==1)
        cprintf("  ²²²²²²  ");
    else if(strt[x]==2)
    {
        cprintf("Þ²²²²²²²²Ý");
        cprintf("  ²²²²²²  ");
    } else if(strt[x]==3)
    {
        cprintf(" ²²²²²²²² ");
        cprintf("Þ²²²²²²²²Ý");
        cprintf("  ²²²²²²  ");
    }else if(strt[x]==4)
    {
        cprintf("Þ²²²²²²²²Ý");
        cprintf(" ²²²²²²²² ");
        cprintf("Þ²²²²²²²²Ý");
        cprintf("  ²²²²²²  ");
    }
    strt[x]++;
    if(strt[x]==21 && x==car)
    {
    status(3);
    speed=30;
    score(0);
    sound(60);
    delay(110);
    nosound();
    sound(80);
    delay(150);
    nosound();
    sound(120);
    delay(210);
    nosound();
    go=1;
    getch();
    }
    textcolor(YELLOW);
//
}
void main()
{
    clrscr();
    randomize();
    _setcursortype(_NOCURSOR);
    char c,ch;
    int i,x;
    while(1){
    for(x=0;x<3;x++)
    {
        strt[x]=1;
        dwn[x]=1;
        end[x]=0;
        cars[x]=0;
    }
    lines();
    status(1);
    speed=30; // 30-20
    x=1;
    myc(x);
    go=0;
    while(!go)
    {
    while(!kbhit())
    {
 
        if(random(speed)==5 && cars[0]==0 && (cars[1]==0 || cars[2]==0))
            cars[0]=1;
        else if(random(speed)==5 && cars[1]==0 && (cars[0]==0 || cars[2]==0))
            cars[1]=1;
        else if(random(speed)==5 && cars[2]==0 && (cars[1]==0 || cars[0]==0))
            cars[2]=1;
        for(i=0;i<3;i++)
            if(cars[i]!=0)
                dc(i,x);
 
        sound(100);
        delay(speed*2);
        nosound();
        score();
    }
    c=getch();
    switch(tolower(c))
    {
    case 'p' :  status(2);
                sound(1500);
                delay(210);
                nosound();
                sound(350);
                delay(150);
                nosound();
                sound(1000);
                delay(300);
                nosound();
                getch();
                status(1);
                break;
    case 0 :    ch=getch();
                if(ch==75 && x>0)
                {
                    x--;
                    myc(x);
                    sound(1200);
                    delay(20);
                }
                else if(ch==77 && x<2)
                {
                    x++;
                    myc(x);
                    sound(1200);
                    delay(20);
                }
                break;
    case 'x': return;
    }
    }
    }//outer while
}