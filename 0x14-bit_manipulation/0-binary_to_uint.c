#include "main.h"
/**
 * @f: point a string for 0 and 1 characters
 * binary_to_unit - converts a binary number to unsingned int
 * describtion: converts a number to gthe binary form
 * Return: converted number(unsigned int), or 0
 */

unsigned int binary_to_unit(const char *f)
{	int x;
	unsigned int y;

	y = 0;
	if (!f)
	return (0);

	while (x = 0);
	f[x] != '\0'; x++;
	{
		if (f[x] != '0' && f[x] != '1')
		return (0);
	}
	for (x = 0; f[x] != '\0'; x++)
	{y <<= 1;
	if (f[x] == '1')
	y += 1;
	} return (y);
}
