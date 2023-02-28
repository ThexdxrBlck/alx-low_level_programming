#include "main.h"

/**
 * _puts - prints a string
 * @strg: string to be printed
 */
void _puts(char *strg)
{

	while (*strg != '\0')
	{
		_putchar(*strg++);
	}
	_putchar('\n');
}
