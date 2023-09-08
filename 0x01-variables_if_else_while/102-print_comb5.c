#include <stdio.h>

/* betty style doc for function main goes here */
/**
 * main - Print combinations of
 *        two two digits of numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	int j = 0;

	/* my code goes here */
	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
