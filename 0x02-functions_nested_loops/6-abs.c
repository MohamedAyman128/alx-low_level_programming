es (20 sloc)  239 Bytes

#include "holberton.h"

/**
 * _abs - Computes the absolute value
 * of an integer.
 *
 * @i: input number as an integer.
 *
 * Return: absolute value
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
