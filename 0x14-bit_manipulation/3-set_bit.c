#include "main.h"
/**
 * @index: begins from 0 at the intended bit
 * @n : pointer number of i
 * set_bit- value of bit to 1 at a particular index
 * description: it points to a particular bit at a given index
 * return: -1 if there is an error and 1 if succesfull
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int i;


	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	i = 1 << index;


	*n = *n | i;

	return (1);
}
