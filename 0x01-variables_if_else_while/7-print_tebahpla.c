#include <stdio.h>

/* betty style doc for function main goes here */
/**
 * main - Print alphabet in lowercase
 *        reversly
 * Return: Always 0.
 */

int main(void)
{
	char cara = 'z';
	int i = 0;

	/* my code goes here */

	while (i < 26)
	{
		putchar(cara);
		cara--;
		i++;
	}
	putchar('\n');
	return (0);
}
