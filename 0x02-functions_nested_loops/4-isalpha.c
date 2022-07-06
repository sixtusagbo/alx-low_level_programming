#include "main.h"
#include <ctype.h>

/**
* _isalpha - Checks for alphabetic character
* @c: character to be tested
*
* Return: 1 if c is a letter, lowercase or uppercase
* or 0 otherwise
*/
int _isalpha(int c)
{
	if (isalpha((char) c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

