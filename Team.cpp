/**********************************************************************
** Name: Jamie Loebe
** Date: 07/23/2018
** Description: This is the implementation file for the Team class, that 
** calculates the total points for each player on the team.
**********************************************************************/
#include "Player.hpp"
#include "Team.hpp"
#include <iostream>

//Constructor for Team with parameters. Initializes each of the data memmbers.
Team::Team(Player userPG, Player userSG, Player userSF, Player userPF, Player userC)
{
    pointGuard = userPG;
    shootingGuard = userSG;
    smallForward = userSF;
    powerForward = userPF;
    center = userC;
}

void Team::setPointGuard(Player newPG)
{
    pointGuard = newPG;
}

Player Team::getPointGuard()
{
    return pointGuard;
}

void Team::setShootingGuard(Player newSG)
{
    shootingGuard = newSG;
}

Player Team::getShootingGuard()
{
    return shootingGuard;
}

void Team::setSmallForward(Player newSF)
{
    smallForward = newSF;
}

Player Team::getSmallForward()
{
    return smallForward;
}

void Team::setPowerForward(Player newPF)
{
    powerForward = newPF;
}

Player Team::getPowerForward()
{
    return powerForward;
}

void Team::setCenter(Player newC)
{
    center = newC;
}

Player Team::getCenter()
{
    return center;
}

//Function that adds up all the points for each of the five positions.

int Team::totalPoints()

{
    int totalPoints = 0;
    totalPoints += getPointGuard().getPoints();
    totalPoints += getShootingGuard().getPoints();
    totalPoints += getSmallForward().getPoints();
    totalPoints += getPowerForward().getPoints();
    totalPoints += getCenter().getPoints();
    return totalPoints;
}
