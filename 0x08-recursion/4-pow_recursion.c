#include "main.h"

/**
 * _pow_recursion - Calculate power of a number
 * @x: value to raise
 * @y: power
 *
 * Return: The value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
