/*******************************************************************************
 ** Author: Jamie Loebe
 ** Date: 08/06/2018
 ********************************************************************************/

#ifndef Point_hpp
#define Point_hpp

class Point {
private: //Private variables
    double XCoord;
    double YCoord;
    
public: //Constructors
    Point(); //DEFAULT CONSTRUCTOR. Set both parameters to 0
    Point(double point_X, double point_Y); // CONSTRUCTOR. Initialize parameter

    //Function declarations
    
    //setters. Set the value
    void setXCoord(double point_X);
    void setYCoord(double point_Y);
    
    //getters. Get the value.
    double getXCoord();
    double getYCoord();
    
    //Function that returns distance
    double distanceTo(const Point &p2);
    
};
#endif

