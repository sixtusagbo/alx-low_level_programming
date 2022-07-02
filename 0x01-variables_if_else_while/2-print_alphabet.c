#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* This program will print the English alphabet in lowercase
* Instructions:
* You can only use the putchar function (every other function (printf, puts,
* etc) is forbidden
* All your code should be in the main function
* You can only use putchar twice in your code
* Return: Always (0)
*/
int main(void)
{
	char counter = 'a';

	while (counter <= 'z')
	{
		putchar(counter++);
		if (counter > 'z')
			putchar('\n');
	}
	return (0);
}
