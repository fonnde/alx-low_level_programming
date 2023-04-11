#include "main.h"
/**
 * @n: for the first number
 * @m: for the second number
 * flip_bits - skips to move from number to another number
 * description: for all number to flip to another number
 * return : the exact number of bits which needs to be flipped
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;

	unsigned int x, y;

	x = 0;
	result = 1;
	differnce = n ^ m;
	for (y = 0; y < (sizeof(unsigned long int) * 8); y++)
	{


	if (result == (differnce & result))
	x++;
	result <<= 1;
	}

	return (x);
}
