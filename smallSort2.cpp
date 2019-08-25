/*******************************************************************************************************************
** Author: Jamie Loebe
** Date: 08/02/2018
** Description: This program prompts the user for three integers and then sorts those three values
** into ascending order using pointers.
*******************************************************************************************************************/

#include <iostream> 

using std::cout;
using std::cin;
using std::endl;

void smallSort2(int *first, int *second, int *third);
 
/*int main()
{
    int first = 14;
    int second = -90;
    int third = 2;

    smallSort2(&first, &second, &third);

    cout << first << ", " << second << ", " << third << endl;
}
*/

/********************************************************
** Description: This function sorts 3 integers into
** ascending order by using pointers.
********************************************************/

void smallSort2(int *first, int *second, int *third)

{
    int temp;

    if (*second < *first)
    {
        temp = *first;
        *first = *second;
        *second = temp;
    }

    if (*third < *second)
    {
        temp = *second;
        *second = *third;
        *third = temp;
    }

    if (*second < *first)
    {

        temp = *first;
        *first = *second;
        *second = temp;

    }

}
