#include "main.h"
/**
 * print_dec - a function that print %d
 * @d: integer to print
 * Return: Always success
 */
int print_dec(va_list d)
{
	int num, divisor, digit, count = 0;
	unsigned int abs_num;

	num = va_arg(d, int);
	if (num < 0)
	{
		_putchar('-');
		abs_num = (num == INT_MIN) ? (unsigned int)INT_MAX + 1:
			(unsigned int)(-num);
		count++;
	}
	else
	{
		abs_num = -num;
	}
	divisor = 1;
	while (divisor <= abs_num / 10)
		divisor *= 10;
	if (abs_num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (divisor != 0)
		{
			digit = abs_num / divisor;
			_putchar(digit + '0');
			abs_num %= divisor;
			divisor /= 10;
			count++;
		}
	}
	return (count);
}
