#include<iostream.h>
#include<conio.h>
void main ()
{
clrscr();
int array[100], n, i, max, min;
float average,sum;
cout<< "Enter the size of the array : ";
cin>>n;
    for (i = 0; i < n ; i++)
    {
     cout<<"Enter the value: ";
     cin>>array[i];
     sum = sum + array[i];
     max = array[0];
     min = array[0];
     if(max < array[i])
     {
     max = array[i];
     }
     if(min > array[i])
     {
     min = array[i];
     }
    }

    average = sum/n;
    cout<<"Average is: "<< average << endl;
    cout<<"Largest number: " << max <<endl;
    cout<<"Smallest number: " << min;
    getch();
}