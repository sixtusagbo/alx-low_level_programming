#include "main.h"

/**
* _isdigit - Checks for a digit  (0 - 9)
* @c: character to be tested
* Return: 1 if c is a digit and 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
