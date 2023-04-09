#include "main.h"
/**
 * @pow: power exponent
 * @base: exponent base
 * _power - calculates base and power
 * describtion: describes both base and power
 *
 * return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int number;
	unsigned int x;

	number = 1;
	for (x = 1 ; x <= _power; x++)
	number *= base;
	return (number);
}
/**
 * @m: number of pretended
 * print_binary - prints the binary representation of a number
 * describtion: prints the binary representation of a number
 * return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bring, result;
	char flash;

	flash = 0;
	bring = _power(2, sizeof(unsigned long int) * 8 - 1);


	while (bring != 0)
	{
		result = n & bring;

		if (result == bring)
		{
		flash = 1;
	_putchar('1');

		}
		else if (flash == 1 || bring == 1)
		{
			_putchar('0');
		}
		bring >>= 1;
	}
}
