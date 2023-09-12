#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *                      in lowercase
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	/*my code goes here*/

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}

