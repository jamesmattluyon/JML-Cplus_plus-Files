#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <iomanip.h>
#include <dos.h>


int main()
{
    FILE *fp, *ft;
    char another, choice;

    struct student
    {
	char first_name[50], sur_name[50];
	char course[100];
	long int section;
	long int studnum;
    };

    struct student e;
    char xfirst_name[50], xsur_name[50];
    long int recsize;

    fp=fopen("users.txt","rb+");

    if (fp == NULL)
    {
	fp = fopen("users.txt","wb+");

	if (fp==NULL)
	{
	    cout<<"Cannot open file";
	    return 0;
	}
    }


    recsize = sizeof(e);

    while(1)
    {
	clrscr();

	cout << "\t****** ADAMSON UNIVERSITY: STUDENT'S RECORD MANAGEMENT SYSTEM ******";
	cout <<"\n\n                                          ";
	cout << "\n\n";
	cout << "\n \t\t\t 1. Add Data";
	cout << "\n \t\t\t 2. Record Data";
	cout << "\n \t\t\t 3. Modify Records";
	cout << "\n \t\t\t 4. Delete Records";
	cout << "\n \t\t\t 5. Logoff";
	cout << "\n\n";
	cout << "\t\t\t Enter Your Choice: ";
	fflush(stdin);
	choice = getche();
	switch(choice)
	{
	case '1' :
	    fseek(fp,0,SEEK_END);
	    another ='Y';
	    while(another == 'Y' || another == 'y')
	    {
		clrscr();
		cout << "Enter the FirtName  : ";
		gets(e.first_name);
		cout << "Enter the SurName   : ";
		cin>>e.sur_name;
		cout << "Enter the Course    : ";
		gets(e.course);
		cout << "Enter the StudentNum: ";
		cin>>e.studnum;
		cout << "Enter the Section   : ";
		cin>>e.section;
		fwrite(&e,recsize,1,fp);
		cout << "\n Add Another Record (Y/N) ";
		fflush(stdin);
		another = getchar();
	    }
	    break;
	case '2':
	    clrscr();
	    rewind(fp);
	    cout << "=== View the Records in the Database ===";
	    cout << "\n";
	    while (fread(&e,recsize,1,fp) == 1)
	    {
		cout<<"\n";
		cout<<"\n"<< e.first_name << setw(10)  << e.sur_name;
		cout<<"\n";
		cout<<"\n"<< e.course <<  setw(10)  << e.studnum << setw(8) << e.section;
	    }
	    cout << "\n\n";
	    system("pause");
	    break;

	case '3' :
	    clrscr();
	    another = 'Y';
	    while (another == 'Y'|| another == 'y')
	    {
		cout << "\n Enter the SurName of the student : ";
		cin >> xsur_name;

		rewind(fp);
		while (fread(&e,recsize,1,fp) == 1)
		{
		    if (strcmp(e.sur_name,xsur_name) == 0)
		    {
			cout<<" Enter new the FirtName  : ";
			gets(e.first_name);
			cout<<" Enter new the SurName   : ";
			cin>>e.sur_name;
			cout<<" Enter new the Course    : ";
			gets(e.course);
			cout<<" Enter new the StudentNum: ";
			cin>>e.studnum;
			cout<<" Enter new the Section   : ";
			cin>>e.section;
			fseek(fp, - recsize, SEEK_CUR);
			fwrite(&e,recsize,1,fp);
			break;
		    }
		    else
			cout<<" Record not found";
		}
		cout << "\n Modify Another Record (Y/N) ";
		fflush(stdin);
		another = getchar();
	    }
	    break;


	case '4':
	    clrscr();
	    another = 'Y';
	    while (another == 'Y'|| another == 'y')
	    {
		cout << "\n Enter the SurName of the student to delete : ";
		cin >> xsur_name;

		ft = fopen("temp.dat", "wb");

		rewind(fp);
		while (fread (&e, recsize,1,fp) == 1)

		    if (strcmp(e.sur_name,xsur_name) != 0)
		    {
			fwrite(&e,recsize,1,ft);
		    }
		fclose(fp);
		fclose(ft);
		remove("users.txt");
		rename("temp.dat","users.txt");

		fp=fopen("users.txt","rb+");

		cout << "\n Delete Another Record (Y/N) ";
		fflush(stdin);
		another = getchar();
	    }

	    break;

	case '5':
	    fclose(fp);
	    cout <<"\n\n";
	    cout <<"\t\t THANK YOU KLASMEYT, FOR USING THIS PROGRAM...";
	    delay(1000);
	    cout <<"\n\t\t Logging off..   \n\n";
	    delay(1200);
	    exit(0);
	}
    }
    return 0;
}
