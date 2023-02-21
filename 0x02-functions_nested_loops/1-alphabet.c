#include "main.h"
/**
 * main - entry point
 * Description - prints 10 times the  alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char chr;

	chr = 'a';
	while (chr <= 'z')
	{
		_putchar(chr);
		chr++
	}
	_putchar('\n');
}
