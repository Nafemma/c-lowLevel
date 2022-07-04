#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: program
 * Return : Always 1 (Success)
 */
int main(void)
{
static int ch;

for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
}
putchar(10);
putchar('\n');

return (0);
}
