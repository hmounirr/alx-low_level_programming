#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints all multiple of 3 or 5 below 1024
 *         (excluded)
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int sum = 0;

	/* my code goes here */

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("the summ of all multiple of 3 or 5 is %d\n", sum);
	return (0);
}
