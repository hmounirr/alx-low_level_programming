#include <stdio.h>

/* betty style doc for function main goes here */
/**
 * main - Print numbers from 0 to 9
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	/* my code goes here */
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
