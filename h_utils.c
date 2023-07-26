#include "main.h"
#include <math.h>
/**
 * print_short_dec - print decimal with h modifier
 * @d: number
 * Return: success
 */
int print_short_dec(va_list d)
{
	int num = (short int)va_arg(d, int);
	int i, digit, temp, num_digit, count = 0;

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
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		num_digit++;
	}
	for (i = num_digit - 1; i >= 0; i--)
	{
		digit = (num / _pow(10, i)) % 10;
		_putchar(digit + '0');
		count++;
	}
	return (count);
}
/**
 * print_ushort_dec - print unsigned dec num with h modifier
 * @u: num to print
 * Return: success
 */
int print_ushort_dec(va_list u)
{
	unsigned int num = (unsigned short int)va_arg(u, unsigned int);
	unsigned int temp, digit;
	int i, num_digit, count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	num_digit = 0;
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		num_digit++;
	}
	for (i = num_digit - 1; i >= 0; i--)
	{
		digit = (num / _pow(10, i)) % 10;
		_putchar(digit + '0');
		count++;
	}
	return (count);
}
