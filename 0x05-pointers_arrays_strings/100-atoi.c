#include "main.h"

/**
 * _atoi - function that have a string as a parameter
 *         and search for digits init
 * @s:pointer that points at our string
 *
 * Return: the value of the integer found in the string
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int digit = 0, sign = 1;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	} while (s[i] >= '0' && s[i] <= '9')
	{
		digit = digit * 10 + (s[i] - '0');
		i++;
	}

	return (digit * sign);
}
