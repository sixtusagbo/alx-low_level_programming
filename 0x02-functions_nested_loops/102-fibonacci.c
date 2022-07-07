#include <stdio.h>

/**
* main - Entry point
* Description: Prints the first 50 Fibonacci numbers, starting with 1 and 2,
* followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	long int n = 50, k, f1, f2, f = 1;

	f1 = f2 = 1;
	for (k = 1; k <= n; k++)
	{
		if (k != n)
			printf("%ld, ", f);
		else
		{
			printf("%ld\n", f);
		}

		f = f1 + f2;
		f2 = f1;
		f1 = f;
	}

	return (0);
}
