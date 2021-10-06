#include <iostream.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct Node{
    int po_no;
    char stu_name[50];
    Node *next;
};
Node *top;

class stack{

public:
    void push(int n, char name[]);
    void pop();
    void display();
};

void stack :: push(int n,char name[])
{
    struct Node *newNode=new Node;
    //fill data part
    newNode->po_no=n;
    strcpy(newNode->stu_name,name);
    //link part
    newNode->next=top;
    //make newnode as top/head
    top=newNode;
}
void stack ::pop()
{
    if(top==NULL){
	cout<<"List is empty!"<<endl;
    }
    cout<<top->stu_name<<" is removed."<<endl;
    top=top->next;
}
void stack:: display()
{
if(top==NULL){
	cout<<"List is empty!"<<endl;
    }
    struct Node *temp=top;
    while(temp!=NULL){
	cout<<temp->po_no<<" ";
	cout<<temp->stu_name<<" ";
	cout<<endl;
	temp=temp->next;
    }
    cout<<endl;
}
void main(){
    clrscr();
    stack s;
    char ch;
    while(1){
    int n;

    cout<<"ENTER CHOICE(EMPLOYEE)\n"<<"1.Queue\n"<<"2.Remove Queue\n"<<"3.Display\n"<<"4.Exit\n";
    cout<<"Make a choice: ";
    cin>>n;

    switch(n){
	case 1:
	    Node n;
	    cout<<"Enter details of the element to be pushed \n";
	    cout<<"   Slot Number: ";
	    cin>>n.po_no;
	    cout<<"Enter Employee: ";
	    cin.ignore(1);
	    cin.getline(n.stu_name,50);
	    cout<<endl;
	    //push data into the stack
	    s.push(n.po_no,n.stu_name);
	    break;

	case 2 :
	    //pop data from stack
	    s.pop();
	    break;

	case 3 :
	    //display data
	    s.display();
	    break;
	case 4 :
	    exit(0);

	default :
	    cout<<"Invalid Choice\n";break;
    }
  }
}