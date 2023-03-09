#include "main.h"

/**
 * factorial - retirns the factorial of a given number
 * @n: the number to find thr factorial of
 * Return: If n > 0 - the factorial of n. If n < 0- 1 to indicate an error
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
