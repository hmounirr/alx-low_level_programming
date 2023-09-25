#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: the constant byte thats gonna be the fill
 * @n: the size of memory area to be filled
 *
 * Return: the adress in memory of the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i] = b;
	return (s);
}
