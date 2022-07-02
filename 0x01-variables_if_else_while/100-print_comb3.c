#include <stdio.h>>
#include <stdlib.h>
/**
 * main - main block to be executed
 * Description: write programs that print different combination of two digits number
 * Numbers to be separated with ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of two digits
 * Numbers should be printed in ascending ordered
 * Putchar is the only function to be used
 * all other functions are forbidden (printf, puts, etc..)
 * Putchar to be used five times maximum
 * You are not allowed to use any variable of type char
 * all code should be in the main function
 * Return: 0 success
 */
int main(void)
{
int c;
int d = 0;
while (d < 10)
{
	c = 0;
	while (c < 10)
	{
		if (d != c && d < c)
		{
			putchar('0' + d);
			putchar('0' + c);
			if (c + d != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	d++
}
putchar('\n');
return (0);
}
