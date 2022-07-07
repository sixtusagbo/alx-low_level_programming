#include <stdio.h>

/**
* main - Entry point
* Description: Prints the sum of the even-valued terms whose values do
* not exceed 4,000,000 in the fibonacci sequence, followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	long int f1, f2, f, sum = 0;

	f1 = f2 = f = 1;
	while (f <= 4000000)
	{
		if (f % 2 == 0)
			sum += f;

		f = f1 + f2;
		f2 = f1;
		f1 = f;
	}
	printf("%ld\n", sum);

	return (0);
}
