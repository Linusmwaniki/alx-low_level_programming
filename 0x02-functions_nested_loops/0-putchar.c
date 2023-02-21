#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: (0) if 
 */
int main(void)
{
	char c[8] = "_putchar";

	int i = 0;

	while(i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
