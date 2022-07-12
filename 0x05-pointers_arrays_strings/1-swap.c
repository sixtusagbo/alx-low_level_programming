#include "main.h"

/**
* swap_int - Swaps the value of two integers
* @a: first integer
* @b: second integer
*
* Return: nothing.
*/
void swap_int(int *a, int *b)
{
	int oldA = *a, oldB = *b;

	*a = oldB;
	*b = oldA;
}
