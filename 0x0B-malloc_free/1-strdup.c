#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: Pointer to a newly allocated space in memory, which contains a copy
 * of str
 */
char *_strdup(char *str)
{
	int i, j;
	char *dup;

	if (str == NULL)
		return (NULL);

	/* length of str */
	for (j = 0; str[j] != '\0';)
		++j;

	dup = malloc(sizeof(char) * (j + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';

	return (dup);
}
