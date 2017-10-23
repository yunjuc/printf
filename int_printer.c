#include "holberton.h"

/**
 * helper_print_int - helper function to print int
 * @n: number
 */
void helper_print_int (int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');
	if (n / 10)
		_putchar(n / 10);

	_putchar(n % 10 + '0');
}
