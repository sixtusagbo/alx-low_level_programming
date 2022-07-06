#include "main.h"

/**
* print_alphabet - Prints the alphabets, then new line.
*
* Return: void
*/
void print_alphabet(void)
{
	char counter = 97;

	while (counter < 123)
	{
		_putchar(counter++);
	}
	_putchar('\n');
}
