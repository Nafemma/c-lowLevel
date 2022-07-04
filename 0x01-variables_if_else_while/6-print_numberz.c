#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * only using putchar and w/o char variables
 *followed by a new line
 * Return : always 0
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
	putchar(ch);
	}
	putchar(10);

return (0);
}
