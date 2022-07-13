#include "main.h"
#include <string.h>

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte, to the
* buffer pointed to by dest.
* @dest: destination.
* @src: source.
*
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
