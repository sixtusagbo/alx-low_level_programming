#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a character in a string
 * @c: character to search for
 * @s: string to search in
 *
 * Description: Locates character c in string s
 * Return: pointer to first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
