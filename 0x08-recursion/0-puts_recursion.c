#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to print
 *
 * Description: Prints string s, followed by a new line
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
