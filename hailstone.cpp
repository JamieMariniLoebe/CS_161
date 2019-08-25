/********************************************************************************************************************************
** Author: Jamie Loebe
** Date: 07/13/2018
** Description: This program runs a hailstone sequence, and returns the number of steps it takes to reach the number 1.
********************************************************************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int hailstone(int num); 

/*
int main()
{
    int num;

    cout << "Enter the starting integer: " << endl;
    cin >> num;

    int counter = hailstone(num);

    cout << "Counter is " << counter;

    return 0;   

}

*/

int hailstone(int num)
{

    if (num == 1)
    {
        return 0;
    }

    if (num %2 == 0)
    {
        num = num / 2;
    }

    else
    {
        num = num * 3 + 1;
    }

    return 1 + hailstone(num);

}
