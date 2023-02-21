#include "main.h"

/**
 * _islower - checks if a letter is in lowercase format
 * @c : the letter
 *
 * Return: 1 if letter is in lowercase formatt, 0 if not so
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
