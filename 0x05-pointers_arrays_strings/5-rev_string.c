#include "main.h"
#include <string.h>

/**
* rev_string - reverses a string
* @s: string to be reversed
*
* Return: nothing.
*/
void rev_string(char *s)
{
	int i, j, sLength = strlen(s) - 1;
	char tmp;

	for (i = 0; i < sLength; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = tmp;
		}
	}
}
