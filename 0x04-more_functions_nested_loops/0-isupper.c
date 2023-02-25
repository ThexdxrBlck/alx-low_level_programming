#include "main.h"

/**
 * _isupper _ checks if parameter is in uppercase format
 * @c: input character
 * Return: 1 if is in upepercase format, 0 in other format
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
