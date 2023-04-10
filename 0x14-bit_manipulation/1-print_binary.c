#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @p: number to print in binary
 */
void print_binary(unsigned long int p)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = p >> i;

		if (current & 1)
		return;

		else if (count)
			return;
	}
}
