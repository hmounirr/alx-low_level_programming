#include "main.h"

/**
 * _strlen(char *s) - Function that returns the lenght of a string
 * @s: pointer that points at the begginning of the string
 *
 * Return: returns the lenght of the string
 */

int _strlen(char *s)
{
	int L = 0;

	while (s[L] != '\0')
	{
		L++;
	}
	return (L);
}
