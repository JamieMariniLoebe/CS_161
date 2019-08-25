/***************************************************************************************************************************
** Author: Jamie Loebe
** Date: 07/13/2018
** Description: This program prompts the user for three integers and then sorts those three values into ascending order.
****************************************************************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*void inputnums(int&, int&, int&);*/
void smallSort(int&, int&, int&);

/*
int main()
{
    int small, medium, large;

    inputnums(small, medium, large);
    smallSort(small, medium, large);

    cout << small << ", " << medium << ", " << large << endl;


    return 0;
}
*/


/*
void inputnums(int &num1, int &num2, int &num3)

{

                cout << "Please enter the first integer: " << endl;
                cin >> num1;

                cout << "Please enter the second integer: " << endl;
                cin >> num2;               

                cout << "Please enter the third integer: " << endl;
                cin >> num3;

}
*/

void smallSort(int &value1, int &value2, int &value3)

{
    int temp;

    if (value2 < value1)
    {
        temp = value1;
        value1 = value2;
        value2 = temp;
    }



    if (value3 < value2)
    {
        temp = value2;
        value2 = value3;
        value3 = temp;
    }

    if (value2 < value1)
    {
        temp = value1;
	value1 = value2;
	value2 = temp;
    }
}

