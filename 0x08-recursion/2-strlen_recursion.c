#include "main.h"

/**
 * _strlen_recursion - Calulates length of a string
 * @s: string to check
 *
 * Return: Number of characters in s excluding terminating null byte
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
