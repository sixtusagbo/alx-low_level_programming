#include "main.h"
#include "1-alphabet.c"

/**
* print_alphabet_x10 - Print the alphabet 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		print_alphabet();
		i++;
	}
}
