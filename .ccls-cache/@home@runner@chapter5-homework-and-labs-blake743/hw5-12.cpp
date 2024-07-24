//hw5-12.cpp - displays the total owed
//Created/revised by Blake Smith on 7/24/24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double price1;
double price2;
double total;

//prices from the salesclerk
cout << "Enter the price of the first item:$";
	cin >> price1;

cout << "Enter the price of the second item:$";
	cin >> price2;

//which item has the lower price
if (price1 <= price2) {
	total = price2 + (price1 / 2);
} 
else 
{
	total = price1 + (price2 / 2);
}
	
//outputs
cout << "Total amount due:$" << total << endl;

return 0;
	}
//end of main function