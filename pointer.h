#ifndef POINTER_H_
#define POINTER_H_
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

//Function Prototype
//This function will prompt the user for a int value and dynamically a create
//  a new integer and return a pointer to it.
//Note: This function will be used later to populate both 1d and 2d arrays.
int* createInt(int);

//This function will loop through the entire array, calling createInt()
//Storing the pointer returned from createInt() into the 1d Array.
void populate1D(int *, int);

//This function will loop through the entire array, calling createInt()
//Storing the pointer returned from createInt() into the 2d Array.
void populate2D(int **, int);

//This function will loop through the entire array and print the integer that
//  is pointed to by each element (i.e. print the int).
void print1D(int *, int);

//This function will loop through the entire array and print the integer that
//  is pointed to by each element (i.e. print the int).
void print2D(int **, int);


#endif /* POINTER_H_ */