#include <stdio.h>

/* betty style doc for function main goes here */
/**
 * main - Print combinations of
 *        three digits of numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	/* my code goes here */

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i < j && j < k && i < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
