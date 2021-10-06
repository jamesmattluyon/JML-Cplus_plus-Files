#include<iostream>
#include<stack>
#include<conio.h>
#include"StackQueue.h"
using namespace std;

int main()
{
	struct Title
	{
		int option;
		int operation; 
	}; Title T;
	while (1)
	{
	FirstMenu:
	cout<<"\n1. Stack\n2. Queue\n3. Quit\nEnter Option: ";cin>> T.option;
	if (T.option == 1)
	{
		StackSecondMenu:
		cout<<"\n1. Odd Numbers\n2. Quotient\n3. Display Stack Only\n4. Back\n5. Quit\nEnter Option: ";cin>>T.operation;
		switch (T.operation)
		{
			case 1: 
			{
			int x,y, choice;
			for (x = 0; x <= 30;x++){y = x%2; if (y != 0){S.Push(x);}}
				while (1)
				{
				cout<<"\n1. Display\n2. Push\n3. Pop\n4. Back\n5. Quit\nEnter Choice: ";cin>>choice;
					switch(choice)
					{
					case 1:{cout<<endl;S.displayStack();cout<<endl;S.show_top();break;}
					case 2:{cout<<"\nEnter number: "; cin>>x; 
						if (x%2 != 0){S.Push(x);cout<<endl;S.displayStack();cout<<endl;S.show_top();break;} 
						else {cout<<endl;S.displayStack();cout<<endl;S.show_top();break;}}
					case 3:{S.pop();cout<<endl;S.displayStack();cout<<endl;S.show_top();break;}
					case 4:{goto StackSecondMenu;break;}
					case 5:{return 0;break;}
					default: cout<<"\nInvalid Choice, Try Again!\n"; break;
					}
				}
			}
			case 2:
			{
			int x,y,z,choice;
			cout<<"\nEnter divisor: ";cin>>y;
			for (x = 0; x <= 30;x++){z =x/y; if (x%y == 0){S.Push(x);}}
				while (1)
				{
				cout<<"\n1. Display\n2. Push\n3. Pop\n4. Back\n5. Quit\nEnter Choice: ";cin>>choice;
					switch(choice)
					{
					case 1:{cout<<endl;S.displayStack();cout<<endl;S.show_top();break;}
					case 2:{cout<<"Enter number: "; cin>>x; 
						if (x%y == 0){S.Push(x);cout<<endl;S.displayStack();cout<<endl;S.show_top();break;} 
						else {cout<<endl;S.displayStack();cout<<endl;S.show_top();break;}}
					case 3:{S.pop();cout<<endl;S.displayStack();cout<<endl;S.show_top();break;}
					case 4:{goto StackSecondMenu;break;}
					case 5:{return 0;break;}
					default: cout<<"Invalid Choice, Try Again!\n"; break;
					}
				}
			}
			case 3:
			{
			int x,choice;
			for (x = 0; x <= 30;x++){S.Push(x);}
				while (1)
				{
				cout<<"\n1. Display\n2. Push\n3. Pop\n4. Back\n5. Quit\nEnter Choice: ";cin>>choice;
					switch(choice)
					{
					case 1:{cout<<endl;S.displayStack();cout<<endl;S.show_top();break;}
					case 2:{cout<<"Enter number: "; cin>>x;S.Push(x);cout<<endl;S.displayStack();cout<<endl;S.show_top();break;} 
					case 3:{S.pop();cout<<endl;S.displayStack();cout<<endl;S.show_top();break;}
					case 4:{goto StackSecondMenu;break;}
					case 5:{return 0;break;}
					default: cout<<"Invalid Choice, Try Again!\n"; break;
					}
				}
			}
			case 4:{goto FirstMenu;break;}
			case 5:{return 0; break;}	
			default: cout<<"\nInvalid Choice, Try Again!\n"; break;
		}
	}
	if(T.option == 2 )
	{
		QueueSecondMenu:
		cout<<"\n1. Odd Numbers\n2. Quotient\n3. Display Queue Only\n4. Back\n5. Quit\nEnter Option: "; cin>>T.operation;	
		switch(T.operation)
		{
			case 1:
			{
			int x,y, choice;
			for (x = 0; x <= 30;x++){y = x%2;if (y != 0){Q.enqueue(x);}}
				while(1)
				{
				cout<<"\n1. Display Queue\n2. Enqueue\n3. Dequeue\n4. Back\n5. Quit\nEnter Choice: ";cin>>choice;
					switch(choice)
					{
					case 1: {cout<<endl;Q.displayQueue();cout<<endl;Q.showFront_Rear();break;}
					case 2: {cout<<"\nEnter number: ";cin>>x; 
						if (x%2 != 0){Q.enqueue (x);cout<<endl;Q.displayQueue();cout<<endl;Q.showFront_Rear();break;}
						else{cout<<endl;Q.displayQueue();cout<<endl;Q.showFront_Rear();break;}}
					case 3: {Q.dequeue();cout<<endl;Q.displayQueue();cout<<endl;Q.showFront_Rear();break;}
					case 4:{goto QueueSecondMenu;break;}
					case 5:{return 0;break;}	
					default: cout<<"\nInvalide Choice, Try Again!\n";break;		
					}
				}
			}
			case 2:
			{
			int x,y,z, choice;
			cout<<"\nEnter divisior: "; cin>>y;
			for (x = 0; x <= 30;x++){z = x/y; if (x%y == 0){Q.enqueue(x);}}
				while(1)
				{
				cout<<"\n1. Display Queue\n2. Enqueue\n3 .Dequeue\n4. Back\n5. Quit\nEnter Choice: ";cin>>choice;
					switch(choice)
					{
					case 1: {cout<<endl;Q.displayQueue();cout<<endl;Q.showFront_Rear();break;}
					case 2: {cout<<"\nEnter number: ";cin>>x; 
						if (x%y == 0){Q.enqueue (x);cout<<endl;Q.displayQueue();cout<<endl;Q.showFront_Rear();break;}
						else{cout<<endl;Q.displayQueue();cout<<endl;Q	.showFront_Rear();break;}}
					case 3: {Q.dequeue();cout<<endl; Q.displayQueue();cout<<endl;Q.showFront_Rear();break;}
					case 4:{goto QueueSecondMenu;break;}
					case 5:{return 0;break;}
					default: cout<<"\nInvalide Choice, Try Again!\n";break;		
					}
				}
			}
			case 3:
			{
			int x, choice;
			for (x = 0; x <= 30;x++){Q.enqueue(x);}
				while(1)
				{
				cout<<"\n1. Display Queue\n2. Enqueue\n3. Dequeue\n4. Back\n5. Quit\nEnter Choice: ";cin>>choice;
					switch(choice)
					{
					case 1: {cout<<endl;Q.displayQueue();cout<<endl;Q.showFront_Rear();break;}
					case 2: {cout<<"\nEnter number: ";cin>>x; Q.enqueue (x);cout<<endl;Q.displayQueue();cout<<endl;Q.showFront_Rear();break;}
					case 3: {Q.dequeue();cout<<endl; Q.displayQueue();cout<<endl;Q.showFront_Rear();break;}
					case 4:{goto QueueSecondMenu;break;}
					case 5:{return 0;break;}
					default: cout<<"\nInvalide Choice, Try Again!\n";break;		
					}
				}
			}
			case 4:{goto FirstMenu;break;}
			case 5:{return 0; break;}	
			default: cout<<"\nInvalid Choice, Try Again!\n"; break;
		}
	}
	if (T.option == 3) {return 0;}
	else {cout<<"\nInvalid Input. Please Try Again!\n";}
	}
}
