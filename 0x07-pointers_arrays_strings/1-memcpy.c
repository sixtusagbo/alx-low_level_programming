#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: constant byte
 * Description: Copies n bytes from memory area src to memory area dest.
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
