#include "pointer.h"
/********************************************************************************************************************
* AUTHOR : Ngoc Dang Tran;
* STUDENT ID : 1197865;
* ASSIGNMENT A17: Dynamic Arrays
* CLASS : CS1B;
* SECTION : MW: 9:30am - 11:50am;
* DUE DATE : 04/14/2021;
*********************************************************************************************************************
* Purpose: Purpose of this lab is to familiarize yourself with dynamic 1D and 2D arrays
*********************************************************************************************************************
* Algorithm:
* One Dimensional Dynamic Array Creation:
* 1. Prompt the user for the number of elements (n) in the 1D array of pointers.
* 2. Dynamically create the 1d array of int pointers that can hold n elements (pointers). Examples:
*   2 elements would result in a array with 2 columns.
*   3 elements would result in a array with 3 columns.
*   16 elements would result in a array with 16 columns ... and so on.
*
* Two Dimensional Dynamic Array Creation:
* 3. Prompt the user for the number of elements (n) in the 2D array, then dynamically create an [m][2] array of int pointers that
*   can hold n elements (pointers).
* Do the math for m Examples:
*   2 elements would result in a [1][2] array, therefore m = 1.
*   3 elements would result in a [2][2] array, therefore m = 2.
*   16 elements would result in a [8][2] array, , therefore m = 8 ... and so on.
* 4. create a function int* createInt(). This function will prompt the user for a int value and dynamically a create
*       a new integer and return a pointer to it. Note: This function will be used later to populate both 1d and 2d arrays.
* 5. create a function void populate1D( pass the array of pointers). This function will loop through the entire array, calling createInt();
*       storing the pointer returned from createInt() into the 1d Array.
* 6. create a function void populate2D( pass the array of pointers). This function will loop through the entire array, calling createInt();
*       storing the pointer returned from createInt() into the 2d Array.
* 7. create a function void print1D( pass the array of pointers). This function will loop through the entire array and print the integer that
*       is pointed to by each element (i.e. print the int).
* 8. create a function void print2D( pass the array of pointers). This function will loop through the entire array and print the integer that
*       is pointed to by each element (i.e. print the int).
* 9. Finally, call both print methods within your int main.
*********************************************************************************************************************
* Sample:
* 1D Array:
* [1,2,3,4,5,6,7,8]
* 2D Array:
* [1,2]
* [3,4]
* [5,6]
* [7,8]
*********************************************************************************************************************/

int main()
{
	system("clear");
	int *pointer;
	int **pointer2;
	int number;
	printf("Please input a number for the number of elements (n) in the 1D array of pointers: ");
	cin >> number;

	//Populate and call print() for 1D array
	pointer = createInt(number);
	populate1D(pointer, number);
	print1D(pointer, number);

	//Populate and call print() for 2D array
	pointer2 = new int* [number];
	populate2D(pointer2, number);
	print2D(pointer2, number);
return 0;
}




