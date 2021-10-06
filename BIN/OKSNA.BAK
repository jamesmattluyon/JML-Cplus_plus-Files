#include <iostream.h>
#include <conio.h>
main ()
{
  int a,b,temp;
  char choice;
  clrscr();
  cout<<"\nA. ODD or EVEN";
  cout<<"\nB. Factorial of a Number";
  cout<<"\nC. MDAS of the TWO VALUES";
  cout<<"\nWhat is your choice? ";
  cin>>choice;

  switch(choice)
  {
   case 'A':{
    cout<<" Enter a value --> ";
    cin>>a;
    temp=a%2;
    if(temp==0)
     cout<< a << " is an Even number....";
    else
     cout<< a << " is an ODD number....";
    break;
    }

   case 'B':{
    temp = 1;
    cout<<"Enter a value-->";
    cin>>a;
    for(b=1;b<=a;b++)
    temp *= b;
    cout<< endl << "The factorial of "<< a << " is " << temp;
    break;
    }

   case 'C':{
    cout<<"Enter a value-->";
    cin>>a;
    cout<<"Enter another value-->";
    cin>>b;
    if(a>b)
    {
     cout<< a << "plus" << b << "is" << a+b << endl;
     cout<< a << "minus" << b << "is" << a-b << endl;
     cout<< a << "divided by" << b << "is" << a/b << endl;
     cout<< a << "multiply to" << b << "is" << a*b << endl;
    }
    else
    {
     cout<< b << "plus" << a << "is" << a+b << endl;
     cout<< b << "minus" << a << "is" << a-b << endl;
     cout<< b << "divided by" << a << "is" << a/b << endl;
     cout<< b << "multiply to" << a << "is" << a*b << endl;
    }
     break;
    }

   default:{
    cout << " UTANG NA LOOB "; }

}
 getch();
}

