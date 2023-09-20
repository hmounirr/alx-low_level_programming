#include "main.h"

/**
 * _atoi - function that have a string as a parameter
 *         and search for digits init
 * %s: pointer that points at our string
 *
 * Return: the value of the integer found in the string
 */
int _atoi(char *s)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    for (i = 0; s[i] != '\0'; i++)
    {
	    if (s[i] == '-')
		    sign = -1;
	    if (s[i] >= '0' && s[i] <= '9')
		    break;
    }

    while (s[i] >= '1' && s[i] <= '9')
    {
	    result = result * 10 + (s[i] - '0');
	    i++;
    }
    return (sign * result);
}
