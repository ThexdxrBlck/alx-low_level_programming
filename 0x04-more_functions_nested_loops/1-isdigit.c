#include "main.h"

/**
 * _isdigit - checks if parameter has value between 0 and 9
 * @c: input number
 * Return: 1 if is a number (0 - 9), 0 in other case
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
