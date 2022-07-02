#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main lock to be executed
 * Description: prints all lower case alphabet in reverse
 * Return: 0 success
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
	putchar(c);
	c--;
}
putchar('\n');
return (0);
}
