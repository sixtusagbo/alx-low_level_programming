#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * An algorithm that generates the hash for a hash table using the magic number
 * 33 - why it works better has not been adequately explained.
 * It was first reported by Daniel J. Bernstein
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
