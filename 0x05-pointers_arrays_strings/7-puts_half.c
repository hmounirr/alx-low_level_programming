#include "main.h"
#include <string.h>
/**
 * puts_half - Function that prints hald of astring
 * @str: Pointer that point at the first element of the string
 *
 * Return: No return
 */
void puts_half(char *str)
{
	int i;
	int length = strlen(str);

	if (length % 2 == 0)
		for (i = length / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	else
		for (i = (length - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	_putchar('\n');
}
