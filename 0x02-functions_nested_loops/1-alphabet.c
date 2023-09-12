#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always 0.
 */

int print_alphabet(void)
{
	int i = 0;
	char cara = 'a';

	/* my code goes here */

	for (i = 0; i < 26 ; i++)
	{
		_putchar(cara);
		cara++;
	}
	_putchar('\n');
	return (0);
}
