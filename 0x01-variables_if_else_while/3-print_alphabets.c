#include <stdio.h>

/**
 * main is the entry point
 *
 * print alphabet in lower case then in uppercase
 *
 * return: always 0 means successful
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n);

	return 0;
}
