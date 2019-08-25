//Assignment 7.b header file

#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

class Person
{
private:
    std::string name;
    double age;

public:
    
    Person(std::string, double); //Takes two values and uses them to initialize the data members.
    
    //getters
    std::string getName();
    int getAge();
};

#endif
