#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: length of the array
 * @c: char to initialize it with
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 * And Returns NULL if size is zero
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	/* new array to be created */
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * (size));

	if (arr != NULL)
	{
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
		arr[i] = '\0';
	}

	return (arr);
}
