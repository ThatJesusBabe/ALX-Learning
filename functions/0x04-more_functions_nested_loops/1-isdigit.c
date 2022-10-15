#include "main.h"

/**
 * _isdigit - s function that checks for a digit (0 through 9)
 * @c : the value to be checked
 * Return : 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 56)
		return (1);
	else
		return (0);
}
