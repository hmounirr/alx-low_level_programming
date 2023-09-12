#include <stdio.h>

/**
 * main - Prints 50 numbers of the Fibonacci suite
 *
 * Return: Always 0.
 */
int main(void)
{
	int Un;
	int i;
	int U1 = 1;
	int U2 = 1;

	/* my code goes here */
	printf("%d, %d, ", U1, U2);
	for (i = 2; i < 50; i++)
	{
		Un = U1 + U2;
		U1 = U2;
		U2 = Un;
		printf(", %d", Un);
	}
	printf("\n");
	return (0);
}
