#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    float num[100], sum, average,i,n;

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
	cout << "Error! number should in range of (1 to 100)." << endl;
	cout << "Enter the number again: ";
	cin >> n;
    }

    for(i = 0; i < n; i++)
    {
	cout <<"Enter number: ";
	cin >> num[i];
	sum = sum + num[i];
    }

    average = sum / n;
    cout<< "Average = " << average << endl;
    cout<<"All numbers that are smaller than the average\n";
   for(i=0;i<10;i++)
   {
    if(average>num[i])
    {
    cout<<num[i]<<'\n';
    }
   }

    getch();
}