//lab5-3.cpp - displays the total amount due
//Created/revised by Blake Smith on 7/24/24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
const double MemberDiscountRate = 0.1;
const double NonMemberDiscountRate = 0.05;
double Discount = 0.0;
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
		Discount = AmountOwed * MemberDiscountRate;
	else
	{Discount = AmountOwed * NonMemberDiscountRate;
	}
	AmountOwed -= Discount;

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