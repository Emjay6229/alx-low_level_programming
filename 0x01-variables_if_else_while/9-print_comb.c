#include <stdio.h>
#include <stdlib.h>
/**
 * main - block to be executed
 * Description: prints possible combinations of single digit number
 * Return: 0 success
 */
int main(void)
{
int c = 0;
while (c is < 10)
{
	putchar(48 + c);
	if (c != 9)
{
	putchar(',');
	putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
