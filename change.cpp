/******************************************************************************  ** Jamie Loebe
 ** Date: 07/02/2018
 ** Description: Prompts the user for a number of cents, and outputs how many of ** of each type of coin would represent that amount with the fewest total
 ** number of coins
******************************************************************************/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int cents;
	const int quarter = 25;
	const int dime = 10;
	const int nickel = 5;
	const int penny =1;

	cout << "Please enter an amount in cents less than a dollar.\n";
	cin  >> cents;

	int Q = cents / quarter; cents %= quarter;
	int D = cents / dime; cents%= dime;
	int N = cents / nickel; cents %= nickel;
	int P = cents;

	cout << "Your change will be:" << endl;
	cout << "Q: " << Q << endl;
	cout << "D: " << D << endl;
	cout << "N: " << N << endl;
	cout << "P: " << P << endl;


	return 0;
}


