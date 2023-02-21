#include "main.h"

/**
 * islower- checks for a lowercase character
 * @c- parameter being tested
 * _islower - checks for a lwercase
 * Return - always 0
 */

int _islower(int c)
{
	for (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
