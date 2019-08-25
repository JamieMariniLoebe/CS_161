/***********************************************************************
Author: Jamie Loebe
** Date: 07/08/2018
** Description: This program prompts a user for a number, then prompts a 
2nd user to guess that number. Repeats until 2nd user guesses correctly,
then outputs how many times it took.
************************************************************************/
#include <iostream> /*include input-output stream library*/

using std::cout; /*Use for output*/
using std::cin; /*Use for input*/
using std::endl; /*Use to end line and move to next*/

int main() /*Starting point of function/program*/
{
    int realnum=0; /*Initialize realnum to 0*/
    int attempt=0; /*Initialize attempt to 0*/
    int numofattempt=1; /*Initialize numofattempt to 0*/

    cout << "Enter the number for the player to guess.\n";
    cin  >> realnum; /*Prompt user for input*/
    cout << "Enter your guess.\n";
    cin  >> attempt; /*Prompt other user for input*/

    while (attempt != realnum) /*while attempt NOT equal to realnum*/
    {

        if (attempt > realnum) /*If attempt greater than realnum*/
	{
	    cout << "Too high - try again.\n"; /*Display output*/
	    numofattempt++; /*Increase numofattempt by 1*/
	    cin >> attempt; /*Prompt user for new attempt*/
	}
	else if (attempt < realnum) /*If attempt less than realnum*/
	{
	     cout << "Too low - try again.\n"; /*Display output*/
	     numofattempt++; /*Increase numofattempt by 1*/
	     cin >> attempt; /*Prompt user for new attempt*/
	}
    }
     if (attempt == realnum) /*If attempt correct*/
	     cout << "You guessed it in " << numofattempt << " tries.\n";
	 
return 0;
}
