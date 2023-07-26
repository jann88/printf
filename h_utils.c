#include "main.h"
/**
 * print_short_dec - print decimal with h modifier
 * @d: number
 * Return: success
 */
int print-short_dec(va_list d)
{
	int num = (short int)va_arg(d, int);
	int i, temp, num_digit, digit, count = 0;

	if (num == 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	num_digit = 0;
	tempt = num;
	while (temp != 0)
	{
		temp /= 10;
		num_digit++;
	}
	for (i = num_digit - 1; i >= 0; i--)
	{
		digit = (num / _pow(10, i)) % 10;
		count++;
	}
	return (count);
}

