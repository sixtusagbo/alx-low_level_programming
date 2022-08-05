#include "variadic_functions.h"

/**
 * print_numbers - Print numbers separated
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * If separator is NULL, it is not printed. A new line is printed at the end.
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list argPtr;

	va_start(argPtr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argPtr, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(argPtr);
}
