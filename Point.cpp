/*******************************************************************************
** Author: Jamie Loebe
** Date: 08/06/2018
** Description: This program defines the Point class, and sets and retrieves
** the coordinates. It also calculates the distance between two points.
********************************************************************************/

#include "Point.hpp"
#include <cmath>

/*****************************************************
** Description: Default constructor that initializes
** both coordinates to 0.
******************************************************/

Point::Point ()
{
    XCoord = 0;
    YCoord = 0;
}

/********************************************************
** Description: Constructor that initializes coordinates
** to point_X and point_Y.
********************************************************/

Point::Point(double point_X, double point_Y)
{
    XCoord = point_X;
    YCoord = point_Y;
}

//setters
void Point::setXCoord(double point_X)
{
    XCoord = point_X;
}

void Point::setYCoord(double point_Y)
{
    YCoord = point_Y;
}

//getters
double Point::getXCoord()
{
    return XCoord;
}

double Point::getYCoord()
{
    return YCoord;
}

/********************************************************
 ** Description: Function that calculates the distance
 ** between two points.
 ********************************************************/

double Point::distanceTo(const Point &p2)
{
    return sqrt(pow((XCoord - p2.XCoord),2) + pow((YCoord - p2.YCoord),2));
    
}
