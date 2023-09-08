#include <stdio.h>

/* betty style doc for function main goes here */
/**
 * main - Print alphabet in lowercase
 *        except 'e' and 'q'.
 * Return: Always 0.
 */

int main(void)
{
	char cara = 'a';
	int i = 0;

	/* my code goes here */

	while (i < 26)
	{
		if (cara == 'e' || cara == 'q')
			cara++;
		else
		{
			putchar(cara);
			cara++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
