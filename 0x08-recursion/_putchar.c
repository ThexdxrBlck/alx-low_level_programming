#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the letter c in stdout
 * @c: the letter to be printed
 * Return: on success 1
 */
int _putchar(char c)
{
	Return (write(1, &c, 1));
}
