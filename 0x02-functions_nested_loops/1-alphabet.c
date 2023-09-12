#include "main.h"

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0.
 */

int main(void)
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
