#include "main.h"
/**
 * print_unsign - a function that print unsigned
 * @u:integer to print
 * Return:zero on success
 */
int print_unsign(va_list u)
{
	int digit, count = 0;
	unsigned int num = va_arg(u, unsigned int);

	unsigned int divisor = 1;

	while (num / divisor > 9)
		divisor *= 10;
	do {
		digit = num / divisor;
		_putchar(digit + '0');
		count++;
		num %= divisor;
		divisor /= 10;
	} while (divisor > 0);

	return (count);
}

