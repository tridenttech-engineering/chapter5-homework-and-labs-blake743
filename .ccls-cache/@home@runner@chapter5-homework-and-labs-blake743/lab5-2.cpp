//lab5-2.cpp - displays the total amount due
//Created/revised by Blake Smith on 7/24/24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
const double DiscountRate = 0.1;
const double ShipCHG1 = 0.99;
const double ShipCHG2 = 4.99;
double AmountOwed = 0.0;
char member = ' ';

//inputs
cout<<"Amount Owed before shipping or discounts: ";
	cin>>AmountOwed;
cout<<"Premimum Membership (Y/N): ";
	cin>>member;

	//discount if statement
	if (toupper(member)=='Y')
		AmountOwed -= AmountOwed * DiscountRate;

//shipping if statement
if (AmountOwed>=100.0)
	AmountOwed += ShipCHG1;
else
	AmountOwed += ShipCHG2;
	
//output
cout<<fixed<<setprecision(2);
cout<<"Amount Owed after discounts and shipping:"<<AmountOwed<<endl;
	
	return 0;
}	//end of main function