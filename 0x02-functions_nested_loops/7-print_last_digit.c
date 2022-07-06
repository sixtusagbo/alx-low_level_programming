#include "main.h"

/**
* print_last_digit - As the name suggests
* @m: number to be used
*
* Return: Last digit of number m
*/
int print_last_digit(int m)
{
	int lastDigit;

	if (m < 0)
		m = -m;

	lastDigit = m % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
