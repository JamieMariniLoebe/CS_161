 /*******************************************************************************
 ** Author: Jamie Loebe
 ** Date: 08/06/2018
 ********************************************************************************/

#include "Point.hpp"
#ifndef LineSegment_hpp
#define LineSegment_hpp

class LineSegment
{
 private:
    Point p1, p2; //Private variables

 public:
    LineSegment(); // Default constructor
    LineSegment(Point &p1, Point &p2); //Constructor that sets points to point objects
    
    //setters
    void setEndPoint1(Point &p1);
    void setEndPoint2(Point &p2);
    
    //getters
    Point &getEndPoint1();
    Point &getEndPoint2();
    
    double length();
    double slope();
    bool inf();
    
};

#endif
