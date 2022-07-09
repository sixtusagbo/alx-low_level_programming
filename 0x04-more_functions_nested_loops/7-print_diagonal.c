#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: times diagonal line is printed.
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
