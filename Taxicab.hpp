/*******************************************************************************
** Author: Jamie Loebe
** Date: 07/18/2018
** Description: Declares taxicab class, and data members. Includes prototypes
** for functions and constructors.
********************************************************************************/

#ifndef Taxicab_hpp
#define Taxicab_hpp

class Taxicab //declare class
{
    private:
    //protected data memebers
    int XCoord, YCoord, DistanceTraveled;

    public:
    //constructors
    Taxicab();
    Taxicab(int, int);
    int getXCoord(); //returns x
    int getYCoord(); //returns y
    int getDistanceTraveled();
    void moveX(int); //moves x
    void moveY(int); //moves y
};

#endif
