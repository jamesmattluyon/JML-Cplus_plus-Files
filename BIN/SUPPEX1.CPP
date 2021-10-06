#include <iostream.h>
#include <conio.h>

float fahrenheit,celsius,num;
char choice;
void acceptInput()
{

      cout<<"Type in the temperature: ";
      cin>>num;
      cout<<"Press C to convert to Celsius and press F to convert to Fahrenheit: ";
      cin>>choice;

}

void totalFahrenheit()
{
fahrenheit = ((num*1.8)+32);
}

void totalCelsius ()
{
 celsius = ((num-32)*5/9);
}

void computation()
{
      if (choice== 'c' || choice== 'C')
      {
	
	 cout<<num <<" degrees Fahrenheit converted to Celsius is: "<<celsius;
      }
      else if (choice== 'F' || choice== 'f')
      {
	 cout<<num<<" degrees Celsius converted to Fahrenheit is: "<<fahrenheit;
      }
}

void main()
{
 clrscr();
 acceptInput();
 totalFahrenheit();
 totalCelsius ();
 computation();
 getch();
}


