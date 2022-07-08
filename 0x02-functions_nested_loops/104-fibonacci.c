#include <stdio.h>

/**
* main - Entry point
* Description: Finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	unsigned long first, second, sum, a, b, c, carry;

	first = 0;
	second = 1;

	for (i = 1; i <= 90; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
		printf("%lu, ", sum);
	}

	a = first % 1000;
	first = first / 1000;
	b = second % 1000;
	second = second / 1000;

	while (i <= 98)
	{
		carry = (a + b) / 1000;
		c = (a + b) - carry * 1000;
		sum = (first + second) + carry;
		first = second;
		second = sum;
		a = b;
		b = c;
		if (c >= 100)
			printf("%lu%lu", sum, c);
		else
			printf("%lu0%lu", sum, c);
		if (i < 98)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
