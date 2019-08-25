/**************************************************************************************************
** Author: Jamie Loebe
** Date: 07/18/2018
** Description: Implementation file, initializes variables and calculates distance traveled.
**************************************************************************************************/

#include "Taxicab.hpp"
#include <cmath>

Taxicab::Taxicab(int X, int Y) //Initialize coordinates to x and y, and distance to 0
{
    XCoord = X;
    YCoord = Y;
    DistanceTraveled = 0;
}

Taxicab::Taxicab() //Initialize all variables to 0
{
    XCoord = 0;
    YCoord = 0;
    DistanceTraveled = 0;
}

int Taxicab::getXCoord() // return x value
{
    return XCoord;
}

int Taxicab::getYCoord() //return y value
{
    return YCoord;
}

void Taxicab::moveX (int X)
{
    DistanceTraveled += std::abs(X);

    XCoord += X;
}

void Taxicab::moveY (int Y)
{
    DistanceTraveled += std::abs(Y);

    YCoord += Y;

} 

int Taxicab::getDistanceTraveled() //return distance value
{
    return DistanceTraveled;
}
