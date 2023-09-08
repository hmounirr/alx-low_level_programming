#include <stdio.h>

/* betty style doc for function main goes here */
/**
 * main - Print in lowercase
 *         all the numbers of base 16.
 * Return: Always 0.
 */

int main(void)
{
	char cara = 'a';
	int i = 0;

	/* my code goes here */

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	i = 0;
	while (i < 6)
	{
		putchar(cara);
		cara++;
		i++;
	}
	putchar('\n');
	return (0);
}
