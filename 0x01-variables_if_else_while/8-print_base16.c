#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
