#include "main.h"

/**
 * _strcpy - Function that copies the content of string whos pointer is src
 * @dest: pointer that points at our buffer 
 * @src: pointer that points at our source string thats gonna be coppied
 *
 * Return: the adress of pointer dest to view the content of the string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
