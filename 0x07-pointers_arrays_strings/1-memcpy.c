#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: destinated string
 * @src: source string
 * @n: n bytes thats gonna be copied
 *
 * Return: address in memory of string dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;



	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
