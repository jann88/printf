#include "main.h"
/**
 * print_zero_dec - print zero padded when specify
 * @z: zeros to print
 * Return: success
 */
int print_zero_dec(va_list z)
{
	int num, digit, count = 0;
	int divisor = 1;

	num = va_arg(z, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	while (divisor <= num / 10)
		divisor *= 10;
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
