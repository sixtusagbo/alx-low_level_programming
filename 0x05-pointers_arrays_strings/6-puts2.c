#include "main.h"
#include <string.h>

/**
* puts2 - Prints first char out of two char in a string
* @str: string to use
*
* Return: nothing.
*/
void puts2(char *str)
{
	int i, strLength = strlen(str);

	for (i = 0; i < strLength; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
