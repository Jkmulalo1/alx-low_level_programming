#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @s: number to search
 * @i: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int s, unsigned int i)
{
	int bit_val;

	if (i > 63)
		return (-1);

	bit_val = (s >> index) & 1;

	return (bit_val);
}
