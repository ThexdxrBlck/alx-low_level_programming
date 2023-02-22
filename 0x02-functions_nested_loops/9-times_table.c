#include "main.h"

/**
 * time_table - print the 9 times table
 */
void times_table(void)
{
	int number, multi, prod;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			prod = number * multi;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
