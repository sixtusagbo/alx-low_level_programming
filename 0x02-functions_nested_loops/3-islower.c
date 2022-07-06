#include "main.h"
#include <ctype.h>

/**
* _islower - Checks for lowercase character
* @c: Character to be tested
*
* Return: 1 if c is lowercase or 0 otherwise
*/
int _islower(int c)
{
	if (islower((char) c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

