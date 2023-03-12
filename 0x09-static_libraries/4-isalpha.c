#include "main.h"

/**
 * _isalpha - checks for alphabetic letters
 * @l: the letter to be checked
 * Return: 1 if l is a letter, 0 if not
 */
int _isalpha(int l)
{
	return ((l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z'));
}
