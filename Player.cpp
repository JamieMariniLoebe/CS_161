/********************************************************************
** Name: Jamie Loebe
** Date: 07/23/2018
** Description: This is the implementation file of the Player class,
** that calculates whether one player has more points than another.
********************************************************************/
#include "Player.hpp"
#include "Team.hpp"
#include <iostream>

//Constructor that initializes variables
Player::Player()
{
    name = "";
    points = -100;
    rebounds = -100;
    assists = -100;
}

//Constructor that intiializes the data members
Player::Player(std::string userName, int userPoints, int userRebounds, int userAssists)
{
    name = userName;
    points = userPoints;
    rebounds = userRebounds;
    assists = userAssists;
}


std::string Player::getName()
{
    return name;
}

void Player::setPoints(int newPoints)
{
    points = newPoints;
}

int Player::getPoints()
{
    return points;
}

void Player::setRebounds(int newRebounds)
{
    rebounds = newRebounds;
}

int Player::getRebounds()
{
    return rebounds;
}

void Player::setAssists(int newAssists)
{
    assists = newAssists;
}

int Player::getAssists()
{
    return assists;
}

bool Player::hasMorePointsThan(Player& p)
{
    return (points > p.points);
}


