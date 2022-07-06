#include "main.h"

/**
* print_sign - Prints the sign of a number
* @n: number to be tested
*
* Prints + if n is greater than zero. Prints 0 if n is zero.
* Prints - if n is less than zero.
* Return: 1 if is greater than zero or 0 is n is zero
* or -1 if n is less than zero and 2 (Always).
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	return (2);
}

