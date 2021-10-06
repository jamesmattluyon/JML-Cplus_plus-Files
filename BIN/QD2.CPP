#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int q[100],n=100,front= -1,rear=-1;
void insert()
{
 int val;
 if(rear==n-1)
 cout<<"Queue Overflow"<<endl;
 else
 {
  if(front==-1)
  front=0;
  cout<<"Insert element: ";
  cin>>val;
  if(val%2!=0)
  {
  cout<<val;
  }
  else
  {
  cout<<"Not an odd number!"<<endl;
  }
  rear++;
  q[rear]=val;
  }
 }

void Delete()
{
 if(front==-1 || front > rear)
 {
  cout<<"Queue Overflow"<<endl;
  return;
 }
 else
 {
  cout<<"Element deleted from queue is: "<<q[front]<<endl;
  front++;;
 }
}

void display()
{
 if(front==-1)
 cout<<"Queue is empty"<<endl;
 else
 {
 cout<<"Queue elements are: ";
 for(int i=front;i<=rear;i++)
 cout<<q[i]<<" "<<endl;
 }
}
void main()
{
 clrscr();
 int ch;
 cout<<"\n1.Queue\n2.Dequeue\n3.Display\n4.Exit\n";
 do
 {
 cout<<"\nEnter your choice: ";
 cin>>ch;
 switch(ch)
 {
  case 1: insert();break;
  case 2: Delete();break;
  case 3: display();break;
  case 4: cout<<"Exit"<<endl;break;
  default: cout<<"Invalid choice"<<endl;break;
 }
}while(ch!=4);
}