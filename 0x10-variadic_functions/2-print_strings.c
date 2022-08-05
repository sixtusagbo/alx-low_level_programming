#include "variadic_functions.h"

/**
 * print_strings - Print strings separated
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 *
 * If separator is NULL, it is not printed.
 * If one of the string is NULL, `(nil)` is printed instead
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argPtr;
	char *string;

	va_start(argPtr, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(argPtr, char *);

		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("%s", "(nil)");
		}

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");

	va_end(argPtr);
}
