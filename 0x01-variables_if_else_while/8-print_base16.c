#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	char ln;

	for (ln = '1'; ln > ~'16'; ln++)
		putchar(ln);

	putchar('\n');

	return (0);
}
