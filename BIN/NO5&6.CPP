#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
# define max 5
int insq(char queue[max][80], int *rear, char data[80])
{
      if(*rear == max -1)
	    return(-1);
      else
      {
	    *rear = *rear + 1;
	    strcpy(queue[*rear], data);
	    return(1);
      }
}
int delq(char queue[max][80], int *front, int *rear, char data[80])
{
      if(*front == *rear)
	    return(-1);
      else
      {
	    (*front)++;
	    strcpy(data, queue[*front]);
	    return(1);
      }
}
void main()
{
      clrscr();
      char queue[max][80], data[80], num[80], flot[80];
      int front, rear, reply;
      int ch;
      front = rear = -1; //... Initialize a Queue
      printf("------------------------------\n");
      printf("\tMenu for Employee");
      printf("\n------------------------------");
      printf("\n 1. Insert String in a Queue");
      printf("\n 2. Delete String from a Queue");
      printf("\n 3. Exit");
      printf("\n------------------------------\n");
      while(1)
      {
	    printf("Choose operation : ");
	    scanf("%d", &ch);
	    switch(ch)
	    {
		  case 1 : // insert
			int i, length;
			int flag=0;
			printf("\nEnter string : ");
			cin.getline(data,80);
			length = strlen(data);
			for(i=0; i<length; i++)
			{if(data[i] != data[length-i-1]){flag = 1;break;}}
			if(flag)
			{cout<<data<<"is not palindrome"<<endl;}
			else
			{cout<<data<<"is a palindrome"<<endl;}
			printf("\nEnter Int: ");
			cin.getline(num,80);
			printf("\nEnter Float: ");
			cin.getline(flot,80);
			reply = insq(queue, &rear, data);
			if(reply == -1 )
			      printf("\nQueue is Full \n");
			else
			      printf("\n'%s' is inserted in queue.",data);
			      printf("\n'%s' is inserted in queue.",num);
			      printf("\n'%s' is inserted in queue.",flot);
			      cout<<endl;
			break;
		  case 2 : // delete
			reply = delq(queue, &front, &rear, data);
			if( reply == -1 )
			      printf("\nQueue is Empty \n");
			else
			      printf("\nDeleted String from Queue is : %s", data);
			      printf("\nDeleted Int from Queue is: %s",num);
			      printf("\nDeleted Float from Queue is: %s",flot);
			      printf("\n");
			break;
		  case 3 : exit(0);
		  default: printf("Invalid operation \n");
	    }
      }
}