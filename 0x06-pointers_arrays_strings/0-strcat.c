#include "main.h"

/**
 * _strcat - a Function that concatenates two strings
 * @dest: pointer that points at the dest string
 * @src: pointer that points at the source string
 *
 * Return: the adress of pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	
	return (dest);
}
