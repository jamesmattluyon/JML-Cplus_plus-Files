#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
 void main()
 {
 clrscr();
 struct product
 {
  float motherboard[5];   float mboard[5];
  float harddisk[5];      float hd[5];
  float diskette[5];      float dk[5];
  float compact_disc[5];  float cd[5];
  float memory_cards[5];  float mc[5];
  int n,i[1],choice,index;
 };
 product p;
 p.motherboard[p.index]=50;    p.mboard[1]=0;
 p.harddisk[p.index]= 50;      p.hd[1]=0;
 p.diskette[p.index]= 50;      p.dk[1]=0;
 p.compact_disc[p.index]= 50;  p.cd[1]=0;
 p.memory_cards[p.index]= 50;  p.mc[1]=0;
 cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
 cout<<"\n1              \t\t"<<"Motherboards   \t\t"<<p.motherboard[p.index];
 cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<p.harddisk[p.index];
 cout<<"\n3              \t\t"<<"Diskette       \t\t"<<p.diskette[p.index];
 cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<p.compact_disc[p.index];
 cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<p.memory_cards[p.index];
 while(p.choice!=3)
 {

 cout<<"\n\nChoice";
 cout<<"\n1. Add Items";
 cout<<"\n2. Remove Items";
 cout<<"\n3: Quit";
 cout<<"\n\nChoose an operation to perform (1-3): ";
 cin>>p.choice;
 switch(p.choice)
{
 case 1:
  if(p.choice == 1)
  {
	 cout<<"Enter the identification number of the product to be added: ";
	 cin>>p.n;
	 cout<<"Number of units to add: ";
	 cin>>p.i[0];
	if(p.n==1)
	{
	   cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
	   cout<<"\n1              \t\t"<<"Motherboards   \t\t"<<((p.motherboard[0])+p.i[0]);
	   cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<p.harddisk[0];
	   cout<<"\n3              \t\t"<<"Diskette       \t\t"<<p.diskette[0];
	   cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<p.compact_disc[0];
	   cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<p.memory_cards[0];
	   p.mboard[1]+=p.motherboard[0];
	}
       if(p.n==2)
	{
	   cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
	   cout<<"\n1              \t\t"<<"Motherboards   \t\t"<<p.motherboard[0];
	   cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<((p.harddisk[0])+p.i[0]);
	   cout<<"\n3              \t\t"<<"Diskette       \t\t"<<p.diskette[0];
	   cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<p.compact_disc[0];
	   cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<p.memory_cards[0];
	   p.hd[1]+=p.harddisk[0];
	}
       if(p.n==3)
	{
	   cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
	   cout<<"\n1              \t\t"<<"Motherboards   \t\t"<<p.motherboard[0];
	   cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<p.harddisk[0];
	   cout<<"\n3              \t\t"<<"Diskette       \t\t"<<((p.diskette[0])+p.i[0]);
	   cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<p.compact_disc[0];
	   cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<p.memory_cards[0];
	   p.dk[1]+=p.harddisk[0];
	}
       if(p.n==4)
	{
	   cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
	   cout<<"\n1              \t\t"<<"Motherboards   \t\t"<<p.motherboard[0];
	   cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<p.harddisk[0];
	   cout<<"\n3              \t\t"<<"Diskette       \t\t"<<p.diskette[0];
	   cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<((p.compact_disc[0])+p.i[0]);
	   cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<p.memory_cards[0];
	   p.cd[1]+=p.compact_disc[0];
	}
       if(p.n==5)
	{
	   cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
	   cout<<"\n1              \t\t"<<"Motherboards   \t\t"<<p.motherboard[0];
	   cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<p.harddisk[0];
	   cout<<"\n3              \t\t"<<"Diskette       \t\t"<<p.diskette[0];
	   cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<p.compact_disc[0];
	   cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<((p.memory_cards[0])+p.i[0]);
	   p.mc[1]+=p.memory_cards[0];
	}
     }break;
     case 2:
     if (p.choice == 2)
	  {
	  cout<<"Enter the identification number of the product to be remove: ";
	  cin>>p.n;
	  cout<<"Number of units to remove:  ";
	  cin>>p.i[0];
	  if(p.n==1)
	  {
	   cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
	   cout<<"\n1              \t\t"<<"Motherboards   \t\t"<<((p.motherboard[0])-p.i[0]);
	   cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<p.harddisk[0];
	   cout<<"\n3              \t\t"<<"Diskette       \t\t"<<p.diskette[0];
	   cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<p.compact_disc[0];
	   cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<p.memory_cards[0];
	  }
	 if(p.n==2)
	  {
	   cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
	   cout<<"\n1              \t\t"<<"Motherboards   \t\t"<<p.motherboard[0];
	   cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<((p.harddisk[0])-p.i[0]);
	   cout<<"\n3              \t\t"<<"Diskette       \t\t"<<p.diskette[0];
	   cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<p.compact_disc[0];
	   cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<p.memory_cards[0];
	  }
	 if(p.n==3)
	  {
	   cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
	   cout<<"\n1              \t\t"<<"Motherboards   \t\t"<<p.motherboard[0];
	   cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<p.harddisk[0];
	   cout<<"\n3              \t\t"<<"Diskette       \t\t"<<((p.diskette[0])-p.i[0]);
	   cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<p.compact_disc[0];
	   cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<p.memory_cards[0];
	  }
	 if(p.n==4)
	  {
	   cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
	   cout<<"\n1   	   \t\t"<<"Motherboards   \t\t"<<p.motherboard[0];
	   cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<p.harddisk[0];
	   cout<<"\n3              \t\t"<<"Diskette       \t\t"<<p.diskette[0];
	   cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<((p.compact_disc[0])-p.i[0]);
	   cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<p.memory_cards[0];
	  }
	 if(p.n==5)
	  {
	   cout<<"Identification Number\t"<<"Product \t\t"<<"Quantity";
	   cout<<"\n1              \t\t"<<"Motherboards   \t\t"<<p.motherboard[0];
	   cout<<"\n2              \t\t"<<"Hard Disk      \t\t"<<p.harddisk[0];
	   cout<<"\n3              \t\t"<<"Diskette       \t\t"<<p.diskette[0];
	   cout<<"\n4              \t\t"<<"Compact Disc   \t\t"<<p.compact_disc[0];
	   cout<<"\n5              \t\t"<<"Memory Cards   \t\t"<<((p.memory_cards[0])-p.i[0]);
	  }
     }break;
  case 3:
  if(p.choice == 3)
  {
      cout<<"You are completely log-off from this inventory program!";
      getch();
  }break;
  default:if(p.choice > 3)
  {cout<<"Invalid choice";}break;
 }
 }
}