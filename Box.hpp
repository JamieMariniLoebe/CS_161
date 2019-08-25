/*******************************************************************************
** Author: Jamie Loebe
** Date: 07/18/2018
** Description: Declare Box class, and data members. Includes the prototypes for
** functions and includes constructors.
********************************************************************************/

#ifndef BOX_HPP
#define BOX_HPP

class Box
{
    private:
    	//Protected variables
        double height;
        double width;
        double length;

    public:
        //setters
        void setHeight(double height1); //Gives new variable for height/Sets new height
        void setWidth(double width1); //Gives new variable for width/Sets new width
        void setLength(double length1); //Gives new variable for length/Sets new length

        //getters
        double getHeight();
        double getWidth();
        double getLength();


	Box(); //DEFAULT CONSTRUCTOR. Initializes each field of the Box.
        Box(double height, double width, double length); //Constructor. Takes 3 doubles, passes to set methods to initialize
        double calcVolume(); //Calculates and returns volume of the Box
        double calcSurfaceArea(); //Calculates and returns surface area of the Box.

};

#endif
