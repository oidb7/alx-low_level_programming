#include "main.h"

/**
 * _islower - checkes for lowercase character
 *
 * returns 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
