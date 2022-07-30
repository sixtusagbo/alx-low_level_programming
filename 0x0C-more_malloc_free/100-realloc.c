#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 *
 * Description: Where ptr is a pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size) old_size is the size, in bytes, of the
 * allocated space for ptr, and new_size is the new size, in bytes of the new
 * memory block. The contents will be copied to the newly allocated space, in
 * the range from the start of ptr up to the minimum of the old and new sizes.
 *
 * Return: ptr.
 * If new_size > old_size, the “added” memory should not be initialized
 * if new_size == old_size, returns ptr without changes.
 * If ptr is NULL, then the call is equivalent to malloc(new_size), for all
 * values of old_size and new_size.
 * If new_size is equal to zero, and ptr is not NULL, then the call is
 * equivalent to free(ptr). Return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
