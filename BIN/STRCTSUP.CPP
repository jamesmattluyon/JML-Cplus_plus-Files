#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
 clrscr();
    struct date
    {
	int day;
	int month;
	int year;
    };
    struct details
    {
	char name[20];
	int price;
	int code;
	int qty;
	struct date mfg;
    };
    struct details item[50];
    int n, i, choice;
    cout<<"Choice";
    cout<<"\n1. Add items";
    cout<<"\n2. Remove items";
    cout<<"\n3. Quit";
    cout<<"\nChoose an operation to perform (1-3): ";
    cin>>choice;
     switch(choice)
     {
     case 1:
     printf("Enter number of items:");
     scanf("%d", &n);
     fflush(stdin);
     for (i = 0; i < n; i++)
     {
	fflush(stdin);
	printf("Item name: \n");
	scanf("%s", item[i].name);
	fflush(stdin);
	printf("Item code: \n");
	scanf("%d", &item[i].code);
	fflush(stdin);
	printf("Quantity: \n");
	scanf("%d", &item[i].qty);
	fflush(stdin);
	printf("price: \n");
	scanf("%d",  &item[i].price);
	fflush(stdin);
	printf("Manufacturing date(dd-mm-yyyy): \n");
	scanf("%d-%d-%d", &item[i].mfg.day,
	&item[i].mfg.month, &item[i].mfg.year);
    }break;
    case 2:
    case 3:cout<<"You are completely log-off from this inventory program";
	   getch();
	   exit(3);
    default: cout<<"Invalid choice";break;
   }
    printf("             *****  INVENTORY ***** \n");
    printf("------------------------------------------------------------------\n");
    printf("S.N.|    NAME           |   CODE   |  QUANTITY |  PRICE| MFG.DATE \n");
    printf("------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
	printf("%d     %-15s        %-d          %-5d     %-5d %d/%d/%d \n", i + 1, item[i].name, item[i].code, item[i].qty,item[i].price, item[i].mfg.day, item[i].mfg.month,
	item[i].mfg.year);
    printf("------------------------------------------------------------------\n");
    getch();
}