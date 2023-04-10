#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @np: number to print in binary
 */
void print_binary(unsigned long int np)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = np >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
