#include <stdio.h>

/**
 * main- prints all numbers of base 16 in lowercase
 * Return: Always 0.
 */
int main(void)
{
int num;
char letter;

for (num = 48; num <= 57; num++)
{
putchar(num);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar (10);

return (0);
}
