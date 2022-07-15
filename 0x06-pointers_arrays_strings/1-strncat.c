#include "main.h"
#include <string.h>

/**
* _strncat - concatenates two strings using at some bytes at most
* @dest: destintion string
* @src: source string
* @n: bytes to use at most
*
* Note: src does not need to be null-terminated if it contains n or more bytes.
* Return: A pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
