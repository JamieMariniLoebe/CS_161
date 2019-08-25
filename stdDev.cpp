/********************************************************************************
** Name: Jamie Loebe 
** Date: July 27th, 2018
** Description: This is the implementation file for a program that returns the standard deviation of the ages input.
********************************************************************************/

#include <cmath>
#include <iostream>
#include "Person.hpp"


using std::cout;
using std::cin;
using std::endl;
using std::string;


double stdDev(Person arr[], int size)
{
    double mean = 0.0;
    
    double stdDevCalc[size];
    
    
    //Calculate the mean
    for(int index=0; index<size; index++) {
        mean = mean + arr[index].getAge();
    }
    mean = mean / size;
    
    //For each number, subtract the mean and square the result
    double subOfMean = 0.0;
    for(int index=0; index < size; index++) {
        subOfMean = arr[index].getAge()-mean;
        stdDevCalc[index] = subOfMean * subOfMean;
    }
    
    //Calculate the mean of the squared differences
    double meanOfSquared = 0;
    for(int index=0; index < size; index++) {
        meanOfSquared = meanOfSquared + stdDevCalc[index];
    }
    
    return sqrt(meanOfSquared/size);
}
