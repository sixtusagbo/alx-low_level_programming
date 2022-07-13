#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: array to use.
 * @n: n elements to print.
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *a);
		if (i != (n - 1))
			printf(", ");
		a++;
	}
	printf("\n");
}
