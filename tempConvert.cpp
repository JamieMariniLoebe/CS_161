/******************************************************************************
 ** Name: Jamie Loebe
 ** Date: 07/02/2018
 ** Description: This program prompts the user for a temperature in celsius, 
 ** then displays the temperature in fahrenheit.
*******************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
	double celsius,
	       fahrenheit;
	
	cout << "Please enter a Celsius temperature.\n";
	cin  >> celsius;

	fahrenheit = celsius * (9.0/5.0) + 32.0;
	
	cout << "The equivalent Fahrenheit temperature is: \n" << fahrenheit
             << endl;

	return 0;

}

