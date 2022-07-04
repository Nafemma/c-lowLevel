#include <stdio.h>

/**
 * main- prints all numbers of base 16 in lowercase
 * Return: Always 0.
 */
int main(void)
{
int num;
char letter;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

for (letter = 'a'; letter <= 'g'; letter++)
putchar(letter);

return (0);
}
