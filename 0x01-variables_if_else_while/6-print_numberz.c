#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * only using putchar and w/o char variables
 * Return : always 0
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

putchar('\n');

return (0);
}