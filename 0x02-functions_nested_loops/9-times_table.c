#include "main.h"

/**
* times_table - Prints 9 times table starting with 0
*
* Return: void
*/
void times_table(void)
{
	int m = 0, n, currentAnswer, nextAnswer;

	while (m < 10)
	{
		n = 0;
		while (n < 10)
		{
			currentAnswer = n * m;
			nextAnswer = (n + 1) * m;

			if (currentAnswer < 10)
				_putchar(currentAnswer + '0');
			if (currentAnswer >= 10)
			{
				/* First letter */
				_putchar((currentAnswer / 10) + '0');
				/* Last(Second) Letter */
				_putchar((currentAnswer % 10) + '0');
			}

			if (n != 9) /* not at the last column */
			{

				_putchar(',');
				if (nextAnswer < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (nextAnswer >= 10)
					_putchar(' ');
			}

			n++;
		}
		_putchar('\n');
		m++;
	}
}

