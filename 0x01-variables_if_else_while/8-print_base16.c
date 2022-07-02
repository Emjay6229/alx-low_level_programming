#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block to be executed
 * Description: prints numbers of base 16
 * Return: 0 success
 */
int main(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
