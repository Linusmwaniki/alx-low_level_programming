#include "main.h"

/**
 * set_bit - sets a bit at position to 1
 * @n: number being used
 * @index: index being set
 *
 * Return: 1 if successful, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if(n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
	       return(-1);

*n |= (1 << index);
return (1);
}
