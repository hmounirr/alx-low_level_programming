#include <stdio.h>

/* betty style doc for function main goes here */
/**
 * main - Print alphabet in lowercase
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
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
