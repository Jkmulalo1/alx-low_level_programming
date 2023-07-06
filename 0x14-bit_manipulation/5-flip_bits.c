#include "main.h"

/**
 * flip_bits - count the number of bits to flip
 * to get from one number to another
 * @f: first number
 * @s: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int f, unsigned long int s)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = f ^ s;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

