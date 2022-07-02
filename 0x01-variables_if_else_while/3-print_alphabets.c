#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* This program will print the English alphabet in lowercase and uppercase.
* Instructions:
* You can only use the putchar function (every other function (printf, puts,
* etc) is forbidden
* All your code should be in the main function
* You can only use putchar twice in your code
* Return: Always (0)
*/
int main(void)
{
	char counter = 'a', lastLetter = 'z';

	while (counter <= lastLetter)
	{
		putchar(counter++);
		if (counter > 'z')
		{
			/* Reset variables to restart the loop */
			counter = 'A';
			lastLetter = 'Z';
		}
		if (counter == 'Z' + 1)
			/* Test for last letter of the alphabet */
			putchar('\n');
	}
	return (0);
}
