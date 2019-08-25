/*******************************************************************
** Name: Jamie Loebe
** Date: August 8th, 2018
** Description: This program returns the slope and length of 
** LineSegment and initializes the data members.
*******************************************************************/

#include "Point.hpp"
#include "LineSegment.hpp"

/********************************************************
** Description: Default contructor, includes default
** values. Both values hold the address of a point
** object that represents another endpoint in LineSegment.
********************************************************/
LineSegment::LineSegment()
{
    Point p1, p2;
    setEndPoint1(p1);
    setEndPoint2(p2);
}

/********************************************************
 ** Description: Constructor that passes the addresses
 ** to set methods.
 ********************************************************/

LineSegment::LineSegment(Point &p1, Point &p2)
{
    setEndPoint1(p1);
    setEndPoint2(p2);
}

//Setters and getters
void LineSegment::setEndPoint1(Point &p)
{
    p1.setXCoord(p.getXCoord());
    p1.setYCoord(p.getYCoord());
}
void LineSegment::setEndPoint2(Point &p)
{
    p2.setXCoord(p.getXCoord());
    p2.setYCoord(p.getYCoord());
}

Point &LineSegment::getEndPoint1()
{
    return p1;
}

Point &LineSegment::getEndPoint2()
{
    return p2;
}

/********************************************************
 ** Description: Function that returns the length of
 ** LineSegment by using the distanceTo function.
 ********************************************************/

double LineSegment::length()
{
    return p2.distanceTo(p2);
}

