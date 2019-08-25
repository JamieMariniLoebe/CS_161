/***************************************************************
** Name: Jamie Loebe
** Date: 07/23/2018
** Description: Header file for Player class.
***************************************************************/
#ifndef PLAYER_HPP //Confirm no file like this already
#define PLAYER_HPP //Define this file
#include <string> //Include string file, as we are using strings.

class Player //Define a class called Player
{
private:

        //Private data members
        std::string name;
        int points;
        int rebounds;
        int assists;

public:
        //Constructors
        Player(); //Default constructor, initializes name to empty string and each stat to -100
        Player (std::string, int, int, int); //Constructor. Initializes the data members

        //getters
        std::string getName();
        int getPoints();
        int getRebounds();
        int getAssists();

        //setters. DO NOT FORGET: Use 'void', as there is no return value.
        //Parameter must be data type (Where we are inputting number). We are SETTING the statistics to a specific number, NOT returning any value.
        void setPoints(int newPoints);
        void setRebounds(int newRebounds);
        void setAssists(int newAssists);
        bool hasMorePointsThan(Player& p); //Takes a Player parameter, returns true if the Player executing the function has more points
                                        //than the Player that was passed as a parameter.
};

#endif

