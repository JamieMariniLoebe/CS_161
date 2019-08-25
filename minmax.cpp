/***********************************************************************
** Author: Jamie Loebe
** Date: 07/08/2018
** Description: This program prompts the user for a number of integers
they would like to enter and then prompts the user for those integers.
Then it prints the integers and the minimum and maximum.
************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int counter = 0;
        int digit;
	int numdigits;
	int min = 2147483647;
	int max = 1;

	cout << "How many integers would you like to enter?" << endl;
	cin >> numdigits;

	if ( numdigits == 1 )
	{
		cout << "Please enter " << numdigits << " integer." << endl;
	}
	else if ( numdigits > 1 )
	{
		cout << "Please enter " << numdigits << " integers." << endl;
	}
	
	for ( counter = 0 ; counter < numdigits ; counter++)
	{	cin >> digit;

		if ( digit > max )
		{
		max = digit;
		}

		if ( digit < min )
		{
		min = digit;
		}
	}
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;

return 0;
}													    
