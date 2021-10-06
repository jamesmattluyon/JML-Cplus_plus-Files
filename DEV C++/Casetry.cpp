
#include<iostream>
using namespace std;

main()

{
     
      int days;
      int Rent_amount;
      char carNo[10]; // chracter sting
      char cust_name[20];  // chracter string
     
char model;  // to be used for car model selection choice


      int calc_rent(char, int); // Rent Amount calculation Function

      cout<<"Please provide cumstomer Name\t";
      cin>>cust_name;
      cout<<"\nPlease provide Car Model"<<endl;
      cout<<"\tEnter 'A' for Model 2009.\n\tEnter 'B' for Model 2010\n\tEnter 'C' for Model 2011\n";
      cin>>model;
     
      cout<<"Please enter car Number = \t";
      cin>>carNo;
      cout<<"Please enter Number of days = \t";
      cin >> days;


      // Switch structure for options selection
      switch(model)
      {
           case 'A':
           case 'a':
                      cout<<"\n\n\tCustomer Name: " <<cust_name;
                      cout<<"\n\tCar Model:2009 ";
                      cout<<"\n\tCar No: "<<carNo;
                      cout<<"\n\tNumber of days: "<<days;
                      Rent_amount = calc_rent(model, days);
                      cout << "\n\tYour Rental Amaount is: "<<Rent_amount<< endl;
           break;

           case 'B':
           case 'b':
                      cout<<"\n\ntCustomer Name: " <<cust_name;
                      cout<<"\n\tCar Model:2010 ";
                      cout<<"\n\tCar No: "<<carNo;
                      cout<<"\n\tNumber of days: "<<days;
                      Rent_amount = calc_rent(model, days);
                      cout << "\n\tYour Rental Amaount is: "<<Rent_amount<< endl;
           break;
          
           case 'C':
           case 'c':
                      cout<<"\n\n\tCustomer Name: " <<cust_name;
                      cout<<"\n\t\Car Model:2011 ";
                      cout<<"\n\tCar No: "<<carNo;
                      cout<<"\n\tNumber of days: "<<days;
                      Rent_amount = calc_rent(model, days);
                      cout << "\n\tYour Rental Amaount is: "<<Rent_amount<< endl;
           break;
          
           default:
                   cout<<"Please Enter Correct Model Name using A to C n";
           }

      system("pause"); // causes the prompt to pause
      }
    
int calc_rent(char model, int days) // Rent Calculation Function 
{
    if(model == 'A' || model == 'a')
    return (5000 * days);
   
    else if(model == 'B' || model == 'b')
    return (8000 * days);
       
    else if(model == 'C' || model == 'c')
    return (10000 * days);
    }
 	 	 
