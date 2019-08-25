/*******************************************************************************
** Author: Jamie Loebe
** Date: 07/18/2018
** Description: Initializes variables, sets height, width and length. Performs
** calculations for volume and surface area.
********************************************************************************/
#include "Box.hpp"


// initialize variables

Box::Box()
{
    height = 1.0;
    width = 1.0;
    length = 1.0;
}

//setters
Box::Box(double h, double w, double l)
{
    setHeight(h);
    setWidth(w);
    setLength(l);
}
//set height = h
void Box::setHeight(double h)
{
    height=h;
}
//set width = w
void Box::setWidth(double w)
{
    width=w;
}
//set length =l
void Box::setLength(double l)
{
    length=l;
}
//return calculation for volume
double Box::calcVolume()
{
    return height * width * length;
}
//return calculation for surface area
double Box::calcSurfaceArea()
{
    return 2*(height*width) + 2*(height*length) + 2*(width*length);
}
