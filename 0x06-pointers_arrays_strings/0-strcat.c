#include "main.h"

/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: prointer to desr
 */
char *_strcat(char *dest, char *src)
{
	int p;
	int r;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	r = 0;
	while (src[r] != '\0')
	{
		dest[p] = src[r];
		p++;
		r++;
	}
	dest[p] = '\0';
	return (dest);
}
