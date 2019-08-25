/******************************************************************************
 ** Name: Jamie Loebe
 ** Date: 07/02/2018
 ** Description: Prompts the user for five numbers, and then gives the average 
 ** of those numbers.
*******************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
        double n1, n2, n3, n4, n5;
        cout << "Please enter five numbers. \n";
        cin  >> n1 >> n2 >> n3 >> n4 >> n5;


        cout << "The average of those numbers is: \n";
	cout << (n1 + n2 + n3 +  n4 + n5) / 5.0;

	return 0;

}

