#include <stdio.h>

/* betty style doc for function main goes here */
/**
 * main - Print alphabet in lowercase
 *        then in uppercase.
 * Return: Always 0.
 */

int main(void)
{
	char cara = 'a';
	int i = 0;

	/* my code goes here */

	while (i < 26)
	{
		putchar(cara);
		cara++;
		i++;
	}
	cara = 'a';
	i = 0;
	cara = cara - 32;
	while (i < 26)
	{
		putchar(cara);
		cara++;
		i++;
	}
	putchar('\n');
	return (0);
}
