#include "main.h"

/**
 * print_numbers - entry point to return
 *
 * Description: Prints the numbers with _putchar function
 *
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
