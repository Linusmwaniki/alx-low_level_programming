#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number
 * @index: index starting from 0 to the required bit
 *
 * Return: The converted value
 */

int getbit(unsigned long int n, unsigned int index)
{
	if(index > 63)
		return (-1);

	return ((n >> index) & 1);
}
