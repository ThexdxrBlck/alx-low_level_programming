#include "main.h"

/**
 * print_alphabet_x10 - printsa alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int ten;
	char lc;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putcahr(lc);
		_putchar('\n');
	}
}
