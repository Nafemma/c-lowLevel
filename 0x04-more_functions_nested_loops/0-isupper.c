#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase letters
 *
 * @c: parameter to be printed
 *
 * Return: 0 or 1 depending on the conditionn
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
