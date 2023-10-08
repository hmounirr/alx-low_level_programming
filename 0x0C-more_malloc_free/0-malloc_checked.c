#include "main.h"
/**
 * malloc_checked - Function that allocates memory using malloc
 * @b : pointer of type unsigned integer
 * Return: no return just allocates
 */
void *malloc_checked(unsigned int b)
{
	b = malloc(sizeof(unsigned int));

	if (b == NULL)
		return (98);
}
