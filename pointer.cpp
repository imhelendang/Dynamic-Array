#include "pointer.h"

//Function definition
//This function will prompt the user for a int value and dynamically a create
//  a new integer and return a pointer to it.
//Note: This function will be used later to populate both 1d and 2d arrays.
//Postcondition: create a array to pointer and return the pointer
int* createInt(int x)
{
    int *oneDArray = new int[x];

    return oneDArray;
}

//This function will loop through the entire array, calling createInt()
//Storing the pointer returned from createInt() into the 1d Array.
void populate1D(int *other, int x)
{
    for(int i = 0; i < x; i++)
    {
    	other[i] = i+1;
    }
    return;
}

//This function will loop through the entire array, calling createInt()
//Storing the pointer returned from createInt() into the 2d Array.
void populate2D(int **other, int x)
{
	int count = 1;
	for(int row = 0; row < x/2; row++)
	{
		other[row] = createInt(x);
		for(int col = 0; col < 2; col++)
		{
		other[row][col] = row+col+count;
		}
		count++;
	}
	return;
}

//This function will loop through the entire array and print the integer that
//  is pointed to by each element (i.e. print the int).
void print1D(int *other, int x)
{
	cout << "1D Array:" << endl;
	cout << "[";
	for(int index = 0; index < x; index++)
	{
		cout << other[index];
		if(index != x-1)
			cout << " ,";
	}
	cout << "]" << endl;
	return;
}

//This function will loop through the entire array and print the integer that
//  is pointed to by each element (i.e. print the int).
void print2D(int **other, int x)
{
	cout << "\n2D Array: " << endl;
	for(int row = 0; row < x/2; row++)
	{
		cout << "[";
		for(int col = 0; col < 2; col++)
		{
			cout << other[row][col];
			if(col != 1)
			cout << " ,";
		}
	cout  << "]" <<endl;
	}
	return;
}


