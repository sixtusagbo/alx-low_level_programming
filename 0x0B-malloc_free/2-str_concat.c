#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: destination string
 * @s2: string to concatenate to s1
 *
 * Return: pointer to newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1Len, s2Len, i, j;
	char *resStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1Len = 0; s1[s1Len] != '\0'; s1Len++)
		;
	for (s2Len = 0; s2[s2Len] != '\0'; s2Len++)
		;

	resStr = malloc(sizeof(char) * (s1Len + s2Len + 1));

	if (resStr == NULL)
	{
		free(resStr);
		return (NULL);
	}

	for (i = 0; i < s1Len; i++)
	{
		resStr[i] = s1[i];
	}

	for (j = 0; j <= s2Len; i++, j++)
	{
		resStr[i] = s2[j];
	}
	resStr[i] = '\0';

	return (resStr);
}
