#include <stdio.h>
/**
 * Main -entry point
 * print all aphabet letters
 * Return 0 if successful
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		+ch;
	}
	putchar("\n")
	
	return 0;
}
