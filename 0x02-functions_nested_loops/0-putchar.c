#include "main.h"

/**
* main - prints _putchar followed by new line
* Return: Always 0 (Success)
*/
int main(void)
{
	char *output = "_putchar";
	int i;

	for (i = 0; i < (int) sizeof(output); i++)
	{
		_putchar(output[i]);
	}
	_putchar('\n');

	return (0);
}
