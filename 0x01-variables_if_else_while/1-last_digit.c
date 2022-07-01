#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* This program will get the last digit of the random number n
* and compare it to 5, 0 and 6.
* Return: Always (0)
*/
int main(void)
{
	int n;
	char lastDigitOfN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigitOfN = n % 10;
	printf("Last digit of %d is %d %s\n", n, lastDigitOfN, lastDigitOfN > 5
			? "and is greater than 5"
			: lastDigitOfN == 0 ? "and is 0"
			: (lastDigitOfN < 6 && lastDigitOfN != 0) ? "and is less than 6 and not 0"
			: "and is rare!");
	return (0);
}
