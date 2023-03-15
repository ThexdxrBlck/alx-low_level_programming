#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the letter c to stdout
 * @c: the letter to be printed
 *
 * Return: on success 1
 * On error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
