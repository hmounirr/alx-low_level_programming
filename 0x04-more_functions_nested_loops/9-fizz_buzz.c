#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 except for multiple of 3 and 5 
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}
		else
			printf("%d", i);
		printf(" ");
	}
	return (0);
}
