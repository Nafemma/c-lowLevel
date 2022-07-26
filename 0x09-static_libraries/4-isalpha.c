#include "main.h"
/**
 * _isalpha - function checks if c is a letter, lowercase or upper
 * @c: is the int that will use for the argument of function
 * Return: 1 (success) 0 (otherwise)
 */
int _isalpha(int c)
/* code comes here*/
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
