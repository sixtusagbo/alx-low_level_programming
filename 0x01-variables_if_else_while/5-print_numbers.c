#include <stdio.h>

/**
* main - Entry point
*
* This program will print numbers in base 10
* Instructions:
* All your code should be in the main function
* Return: Always (0)
*/
int main(void)
{
	int counter = 0;

	while (counter <= 10)
	{
		printf("%d", counter++);
		if (counter > 10)
			putchar('\n');
	}
	return (0);
}
