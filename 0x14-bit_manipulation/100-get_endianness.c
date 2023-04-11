#include "main.h"
/**
 * get_endianness - checks endianess
 * description : checks for endianess
 * return : 0 if its a big endian, and 1 if a small endian
 *
 * /
 */
int get_endianness(void)
{
	int j;
	char *d;



	j = 1;
	d = (char *)&j;
	return (*d);
}
