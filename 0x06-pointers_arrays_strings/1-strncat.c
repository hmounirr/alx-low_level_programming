#include "main.h"

/**
 * _strncat - Similar to strcat except that,
 *            it concatenate certain number of bit.
 * @dest: pointer that points at our destinate string
 * @src: pointer that points at our source string.
 * @n: number of bits to concatenate.
 *
 * Return: the adress in memory of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (j <= n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
