/*******************************************************************************
** Author: Jamie Loebe
** Date: 07/11/2018
** Description: This function computes the distance an object falls due to
** gravity in a specific time period. 
*******************************************************************************/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl; 

double fallDistance(double time);

/*int main()

{

    double distance;
    double time = 3.2;
    distance = fallDistance (time);

    cout << "The output is " << distance << "." << endl;





     return 0;

}

*/

 

double fallDistance(double time)

{
    double distance;
    const double gravity = 9.8;
    double half = (1.0/2.0);

    return distance = half*gravity*pow(time,2);

}
