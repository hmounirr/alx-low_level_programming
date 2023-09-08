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

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		for (j = 0; j < 10; j++)
		{
			putchar(j + '0');
			if (i < 8 && j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
