#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print alphabet then lowercase then in uppercase
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char ch = 'a';
	char cH = 'A';

	/*prints a - z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A -Z */
	while (cH <= 'Z')
	{
		putchar(cH);
		cH++;
	}
	putchar('\n');

	return (0);
}
