#include "function_pointers.h"

/**
 * print_name - Print a name using function pointers
 * @name: name to print
 * @f: function pointer to use
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
