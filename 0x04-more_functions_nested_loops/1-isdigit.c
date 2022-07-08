#include "main.h"

#include <ctype.h>

/**
 * _isdigit - check for numbers
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
