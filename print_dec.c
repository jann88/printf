#include "main.h"
/**
 * print_dec - a function that print %d
 * @d: integer to print
 * Return: Always success
 */
int print_dec(va_list d)
{
	int num, divisor, digit, count = 0;

	num = va_arg(d, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	divisor = 1;
	while (divisor <= num / 10)
		divisor *= 10;
	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (divisor != 0)
		{
			digit = num / divisor;
			_putchar(digit + '0');
			num %= divisor;
			divisor /= 10;
			count++;
		}
	}
	return (count);
}
