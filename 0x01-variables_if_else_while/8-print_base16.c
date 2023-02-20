#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int number;
	char ln;

	for (number = '1'; number < '10'; number++)
		putchar((number % 10) + '0');

	for (ln = 'a'; ln <= 'f'; ln++)
		putchar(ln);

	putchar('\n');

	return (0);
}
