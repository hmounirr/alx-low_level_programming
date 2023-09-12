#include <stdio.h>

/**
 * main - Prints 50 numbers of the Fibonacci suite
 *
 * Return: Always 0.
 */
int main(void)
{
	long int Un;
	int i;
	long int U1 = 1;
	long int U2 = 2;

	/* my code goes here */
	printf("%ld, %ld, ", U1, U2);
	for (i = 1; i <= 50; i++)
	{

		Un = U1 + U2;
		U1 = U2;
		U2 = Un;
		printf(", %ld", Un);
	}
	printf("\n");
	return (0);
}
