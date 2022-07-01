#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: This program will assign a random number to the
* variable n each time it is executed.
* Return: Always (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d %s\n", n, n > 0 ? "is positive" : n == 0 ? "is zero"
			: "is negative");
	return (0);
}
