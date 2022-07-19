#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: keyword to find
 *
 * Description: Finds the first occurrence of the substring needle in the
 * string haystack.
 * Return: A pointer to the beginning of the located substring, or NULL
 * if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
