#include <stdio.h>

/**
 * main - prints alphabet in lower case and upper case format
 * Reaturn: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; c <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
