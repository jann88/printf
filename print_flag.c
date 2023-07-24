#include "main.h"
/**
 * print_positive_sign - function that print positive sign
 * @num:number to check
 */
void print_positive_sign(int num)
{
	if (num >= 0)
		_putchar('+');
}
/**
 * print_space - a function that print space a num is positive
 * @num: number to check
 */
void print_space(int num)
{
	if (num >= 0)
		_putchar(' ');
}
/**
 * print_prefix - function that hex code for flags
 * @base: base of hex
 */
void print_prefix(int base)
{
	if (base == 8)
		_putchar('0');
	else if (base == 16)
	{
		_putchar('0');
		_putchar('x');
	}
}
/**
 * print_flags - a function that print flags
 * @args:argument
 * @flags:flag to print
 * @base:hex base
 * Return: Success
 */
int print_flag(va_list args, int flags, int base)
{
	int num = va_arg(args, int);
	int is_negative = (num < 0);

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

    if (is_negative) {
        _putchar('-');
        num = -num;
    } else if (flags & 0x02) {
        print_positive_sign(num);
    } else if (flags & 0x04) {
        print_space(num);
    }

    if (flags & 0x08) {
        print_prefix(base);
    }

    int divisor = 1;
    int temp = num;
    while (temp >= base) {
        divisor *= base;
        temp /= base;
    }

    int count = 0;
    while (divisor != 0) {
        int digit = num / divisor;
        _putchar(digit < 10 ? digit + '0' : digit - 10 + 'a');
        num %= divisor;
        divisor /= base;
        count++;
    }

    return count;
}
