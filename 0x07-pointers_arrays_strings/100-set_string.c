#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: destination address.
 * @to: source address.
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
