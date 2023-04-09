#include "main.h"

/**
 * print binary - this program prints the binary represenation of a number
 * @n: number to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
