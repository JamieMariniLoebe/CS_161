/*********************************************************************
** Name: Jamie Loebe
** Date: August 2nd, 2018
** Description: This program accepts an array of 3 integers, and then
** dynamically creates a new array twice as long, adding 1 to each
** of the 3 original integers.
*********************************************************************/

#include <iostream>

void transformArray(int *&old_array, int size) //Function with pointer address of array, and size of array
{
    int *new_array = new int[size*2]; // Dynamically created array
    for(int i = 0; i < size; ++i) 
    {
        new_array[i] = old_array[i]; // Set new array to old array
    }

    for(int i = 0; i < size; ++i)
    {
        new_array[size+i] = old_array[size-i-1] + i; // Add 1 to old array
    }

    delete[] old_array; // Delete (deallocate) the dynamically allocated memory
    old_array = new_array; 
}

/*int main()
{
    int* myArray = new int[3];

    myArray[0] = 4;
    myArray[1] = 2;
    myArray[2] = 5;
    
    transformArray(myArray, 3);
    
    for (int i=0; i<6; i++)
        cout << myArray[i] << endl;

    delete []myArray;
    
    return 0;
}
*/

