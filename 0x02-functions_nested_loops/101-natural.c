#include <stdio.h>

/**
 * main - computes and prints sum of all multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum3 = 0, sum5 = 0, sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
