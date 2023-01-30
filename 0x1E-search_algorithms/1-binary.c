#include "search_algos.h"
#include <math.h>

/**
 * print_array - print the array being searched every time it changes
 *
 * @start: pointer to the first element
 * @size: number of elements in the array
 * Return: nothing
 */
void print_array(int *start, int size)
{
	int i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", start[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle;

	if (array == NULL)
		return (-1);

	print_array(array, size);
	while (left < right)
	{
		middle = floor((left + right) / 2);

		if (array[middle] < value)
		{
			left = middle + 1;
			print_array(&array[left], (right - left) + 1);
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
			print_array(&array[left], (right - left) + 1);
		}
		else
		{
			return (middle);
		}
	}

	return (-1);
}
