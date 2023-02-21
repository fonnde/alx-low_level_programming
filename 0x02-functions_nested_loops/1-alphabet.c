#include "main.h"
/**
 * prints_ alphabet-print all alphabets in lower case
 * written by brandon
 */
void print_alphabet(void)
{
	char (letter);
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		_putchar('\n');
	}
}
