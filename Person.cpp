/*********************************************************************************************
** Name: Jamie Loebe
** Date: July 27th, 2018
** Description: This is the implementation file for the Person class. It initializes the data
** members 'name' and 'age'.
*********************************************************************************************/
//
//Assignment 7.b implementation file for Person.

#include "Person.hpp"
#include <iostream>
#include <string>


Person::Person(std::string userName, double userAge) // Constructor that initializes the data members
{
    name = userName;
    age = userAge;
}

std::string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

