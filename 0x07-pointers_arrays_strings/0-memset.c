#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @n: quantity of memory bytes
 * @s: memory pointer
 * @b: constant byte
 * Description: Fills the first n bytes of the memory area pointed to by s
 * with the constant byte b.
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
