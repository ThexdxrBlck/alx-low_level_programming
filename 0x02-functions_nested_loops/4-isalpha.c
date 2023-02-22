#include "main.h"

/**
 * _isalpha - checks for alphabetic letters
 * @c: letter to be checked
 *
 * Return: 1 if letter is a letter, o if not so
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
