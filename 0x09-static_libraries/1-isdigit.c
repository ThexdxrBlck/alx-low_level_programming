#include "main.h"

/**
 * _isdigit - checks for digits from 0 al the way to 9
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 if not
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
