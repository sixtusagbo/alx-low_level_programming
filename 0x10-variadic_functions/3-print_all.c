#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	/* i and j - for looping, e - isEnd */
	unsigned int i = 0, j, e = 0;
	char *string;
	/* supported types */
	const char s_types[] = "cifs";

	va_start(arglist, format);

	while (format && format[i])
	{
		j = 0;
		while (s_types[j])
		{
			if (format[i] == s_types[j] && e)
			{
				printf(", ");
				break;
			} j++;
		}

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arglist, int)), e = 1;
			break;
		case 'i':
			printf("%d", va_arg(arglist, int)), e = 1;
			break;
		case 'f':
			printf("%f", va_arg(arglist, double)), e = 1;
			break;
		case 's':
			string = va_arg(arglist, char *), e = 1;

			if (string)
			{
				printf("%s", string);
				break;
			}

			printf("(nil)");
			break;
		} i++;
	}

	printf("\n");

	va_end(arglist);
}
