#include "main.h"
#include <string.h>

/**
* _strncpy - copies a string
* @dest: destination string
* @src: source string
* @n: bytes to use at most
* Description: Copies the string src to dest using at most n bytes
* Return: A pointer to dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
