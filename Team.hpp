/***************************************************************************
** Name: Jamie Loebe
** Date: 07/23/2018
** Description : Header file for Team class.
***************************************************************************/
#ifndef TEAM_HPP //Confirm no file like this already
#define TEAM_HPP //Define this file 
#include "Player.hpp"

class Team //Defines a new class called Team
{
private:

    //Private data members of the type Player
    Player pointGuard, shootingGuard, smallForward, powerForward, center;

public:

    Team();
    //Constructor, takes 5 players and uses them to initialize each of the data members.
    Team(Player, Player, Player, Player, Player);

    //getters
    Player getPointGuard();
    Player getShootingGuard();
    Player getSmallForward(); 
    Player getPowerForward();
    Player getCenter();

    //setters
    void setPointGuard(Player);
    void setShootingGuard(Player);
    void setSmallForward(Player);
    void setPowerForward(Player);
    void setCenter(Player);

    //Function
    int totalPoints(); //Sums all of the points for all players
};

#endif
