#include "main.h"
/**
 *
 * @n: checking bits for the main fauntion
 * @index: which bit of a particular function
 * get_bit - returns the value of a given index
 * description: checking bits of a function
 *
 * return: value of bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int div, res;


	if (index > (sizeof(unsigned long int) * 8 - 1))

	return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
	return (1);
	return (0);
}
