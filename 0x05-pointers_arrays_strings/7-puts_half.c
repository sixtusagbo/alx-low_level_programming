#include "main.h"
#include <string.h>

/**
* puts_half - Prints second half of a string.
* @str: string to use
*
* Return: nothing.
*/
void puts_half(char *str)
{
	int strLength = strlen(str);
	int i = strLength % 2 == 1 ? strLength / 2 : (strLength - 1) / 2;

	for (i++; i < strLength; i++)
		_putchar(str[i]);
	_putchar('\n');
}
