#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet
 *
 * Return: 0 Always
 *
 */
void print_alphabet_x10(void)
{
int a, i;
for (a = 0; a <= 9; a++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
/*using ASCII values in code above */
_putchar('\n');
}
}
