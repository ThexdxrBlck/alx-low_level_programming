#include "main.h"

/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src);
{
	int u;
	int l;

	u = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	l = 0;
	while (src[l] != '\0')
	{
		dest[u] = src[l];
		u++;
		l++;
	}
	dest[u] = '\0';
	return (dest);
}
