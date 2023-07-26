#include "main.h"
/**
 * print_dec - a function that print %d
 * @d: integer to print
 * Return: Always success
 */
int print_dec(va_list d)
{
	int num, digit, count = 0;
	size_t i, temp, divisor, abs_num;

	num = va_arg(d, int);
	if (num < 0)
	{
		_putchar('-');
		abs_num = (num == INT_MIN) ? (size_t)INT_MAX + 1:
			(size_t)(-num);
		count++;
	}
	else
	{
		abs_num = (size_t)num;
	}
	divisor = 1;
	temp = abs_num;
	while (temp >= 10)
	{
		temp /= 10;
		divisor++;
	}
	if (abs_num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (divisor > 0)
		{
			temp = abs_num;
			for (i = 1; i < divisor; i++)
				temp /= 10;

			digit = temp % 10;
			_putchar(digit + '0');
			count++;
			divisor--;
		}
	}
	return (count);
}
