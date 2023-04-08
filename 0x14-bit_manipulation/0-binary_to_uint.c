#include "main.h"
/**
 * @b: point a string for 0 and 1 characters
 * binary_to_uint - converts a binary number to unsingned int
 * describtion: converts a number to gthe binary form
 * Return: converted number(unsigned int), or 0
 */

unsigned int binary_to_uint(const char *b)
{	int x;
	unsigned int y;


	y = 0;
	if (!b)
	return (0);
	
	for (x = 0; b[x] != '\0'; x++)
	{
	if (b[x] != '0' && b[x] != '1')
	return (0);
	}
		for (x = 0; b[x] != '\0'; x++)
	{
	y <<= 1;
		if (b[x] == '1')
			y += 1;
	}
	return (y);
}
