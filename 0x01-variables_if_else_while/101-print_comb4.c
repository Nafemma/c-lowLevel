#include <stdio.h>

/**
 * main - prints all combinations of three digits
 * in ascending order and separated by commas and space
 *
 * Return : Always 0
 */

int main(void)
{
int dig1, dig2, dig3;

for (dig1 = 0; dig1 < 8; dig1++)
{
for (dig2 = dig1 + 1; dig2 < 9; dig2++)
{
for (dig3 = dig2 + 1; dig3 < 10; dig3++)
{
putchar((dig1 % 10) + '0');
putchar((dig2 % 10) + '0');
putchar(dig3 % 10) + '0');
}
}
}

putchar('\n');

return (0);
}
