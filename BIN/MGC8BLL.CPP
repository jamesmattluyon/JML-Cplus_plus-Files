#include <stdlib.h>
#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>

void main()
{
    clrscr();
    srand( (unsigned)time(0));
    int ANSWER;
    char question[50];
    while(ANSWER < 8 || ANSWER!='\0' && question!='\0'){
    ANSWER = rand() % 11;
    cout<<"Magic 8 Ball: Ask Something(It will exit if you've seen \"Getting Exit\"\n";
    cin.getline(question,50);
    switch(ANSWER)
    {
	case 0:
	    cout << "Of course! NOT!\n\n";
	    break;
	case 1:
	    cout << "Psssht, yeah right.\n\n";
	    break;
	case 2:
	    cout << "No NEVER.\n\n";
	    break;
	case 3:
	    cout << "Ummmmmmm...not a chance.\n\n";
	    break;
	case 4:
	    cout << "I don't know at this moment.\n\n";
	    break;
	case 5:
	    cout << "Defenitaly! Yes!\n\n";
	    break;
	case 6:
	    cout << "Maybe....\n\n";
	    break;
	case 7:
	    cout << "No way...Not in a Million years!\n\n";
	    break;
	case 8:
	    cout << "You have cracked the code!\n\n";
	    break;
	case 9:
	    cout << "Unfortunately....yes.\n\n";
	    break;
	case 10: cout<<"Getting exit";
		 getch();
		 exit(0);
	    }
     }
}