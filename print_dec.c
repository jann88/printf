#include "main.h"
/**
 * print_dec - a function that print %d
 * @d: integer to print
 * Return: zero on success
 */
int print_dec(va_list d)
{
	int num, divisor, count, temp, digit;

	num = va_arg(d, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	divisor = 1;
	temp = num;
	while (temp >= 10)
	{
		divisor *= 10;
		temp /= 10;
	}
	count = 0;
	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
		count++;
	}
	return (count);
}
