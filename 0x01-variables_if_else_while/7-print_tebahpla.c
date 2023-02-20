#include <stdio.h>

/**
 * main - prints alphabet in lower case format in reverse
 * Return: Always 0
 */
int main(void)
{
	char lr;

	for (lr = 'z'; lr >= 'a'; lr--)
		putchar(lr);

	putchar('\n');

	return (0);
}
