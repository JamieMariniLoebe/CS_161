/************************************************************************
** Author: Jamie Loebe
** Date: 07/08/2018
** Description: This program reads a file, and the integers within it,
and adds them together for a total amount, which it displays from a 
separate file.
************************************************************************/

#include <iostream> /*include input-output stream library*/
#include <fstream>  /*include to open files for reading, writing or both*/
#include <string>   /*include to use string objects*/

using std::cout; /*Use for output*/
using std::cin; /*Use for input*/
using std::endl;/*Use to end line and move to next*/
using std::ofstream; /*Use to create and write data to a file*/
using std::ifstream; /*Use to open and read data from existing file*/
using std::string; /*Use for strings*/

int main() /*Starting point of function/program*/
{

    ifstream inputfile; /*Create file stream object*/
    string fileName; /*Holds name of file inputted by user */
    double value, /*Single value read*/
           sum = 0.0; /*Total of values read*/

    cout << "Please enter your filename.\n"; /*Displays output*/
    cin  >> fileName; /*Prompts user for filename*/

    ifstream inputFile;
    inputFile.open(fileName); /*Open input file*/

	if (inputfile)
	{
            while (inputFile >> value) /*If a value was read, add value to sum*/
                sum = sum + value;
		cout << "result written to sum.txt";
	
            inputFile.close(); /*Close the file*/
        }

     else /*If no input was read*/
        {
            cout << "could not access file\n"; /*Display output*/
        }

    ofstream outputFile; /*Declare file stream object*/
    outputFile.open("sum.txt"); /*Open or create output file*/

    outputFile << sum; /* Input sum amount in the output file*/

    outputFile.close(); /* Close output file*/

return 0;
}

