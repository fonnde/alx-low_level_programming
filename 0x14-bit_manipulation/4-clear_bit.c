#include "main.h"
/**
 * @index : begins at 0 of the intended bit we want to set
 * @n : number to be set for i
 * clear_bit- sets the value of bit to a given index
 * describtion: mask and return the given value
 * return : -1 if error and 1 if succesfull
 */
int clear_bit(unsigned long int *n, unsigned int index)
{


	unsigned long int i;


	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
