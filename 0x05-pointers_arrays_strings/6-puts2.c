#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every character of a string folllowed by a new line
 * @str: pointer that points on the first element of the string
 *
 * Return:NO return
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
