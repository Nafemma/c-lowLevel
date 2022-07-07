#include "main.h"
/**
 * _isalpha - function checks if c is a letter, lowercase or upper
 * @c: is the int that will use for the argument of function
 *
 * Description: if/else checks upper or lowercase
 * Returm: 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
