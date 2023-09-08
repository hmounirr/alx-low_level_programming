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
	int k = 0;
	int l = 0;

	/* my code goes here */

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
