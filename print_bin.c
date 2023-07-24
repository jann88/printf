#include "main.h"
/**
 * print_bin - function that print binary
 * @b: to be printed
 * Return: zero on success
 */
int print_bin(va_list b)
{
	unsigned int num, mask;
	int i, bit;
	int count = 0;
	int leading_zeros = 1;

	num = va_arg(b, unsigned int);
	mask = 1 << (sizeof(unsigned int) * 8 - 1);

	for (i = 0; i < (int)sizeof(unsigned int) * 8; i++)
	{
		bit = (num & mask) ? 1 : 0;
		if (bit || !leading_zeros)
		{
			_putchar(bit + '0');
			count++;
			leading_zeros = 0;
		}
		mask >>= 1;
	}
	if (count == 0)
	{
		_putchar('0');
		count++;
	}
	return (count);
}
