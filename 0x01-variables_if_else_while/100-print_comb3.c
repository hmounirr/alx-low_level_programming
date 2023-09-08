#include <stdio.h>

/* betty style doc for function main goes here */
/**
 * main - Print combinations of
 *        two digits of numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	int j = 0;

	/* my code goes here */

	while (i < 9 && j < 10)
	{
		putchar(i + '0');
		putchar(j + '0');
		if (i < 8 && j < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
		j++;
	}
	putchar('\n');
	return (0);
}
