#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print 0-9 using putchar while ysing int variable
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
