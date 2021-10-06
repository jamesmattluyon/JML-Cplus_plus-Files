#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 double loanAmount, payPeriod, mInterest, mPayment, totalPayment;

 cout<<"Enter loan amount: ";
 cin>> loanAmount;
 cout<<"Payment Period in months: ";
 cin>> payPeriod;
 cout<<"Monthly Interest: ";
 cin>> mInterest;
 mPayment = ((loanAmount / payPeriod) * mInterest) + (loanAmount/ payPeriod);
 cout<<"Monthly Payment: " << mPayment << endl;
 totalPayment = mPayment + loanAmount;
 cout<<"Total Payment: " << totalPayment;

 getch();
}
