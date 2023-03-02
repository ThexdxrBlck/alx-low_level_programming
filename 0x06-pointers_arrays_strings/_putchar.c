#include <unistd.h>

/**
 * _putchar - writes the letter c in stdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar(int char)
{
	return (write(1, &c, 1));
}
