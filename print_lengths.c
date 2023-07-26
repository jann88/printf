#include "main.h"
/**
 * print_lengths- prints decimal with l and h modifier
 * @lh: number to print
 * Return: success
 */
int print_lengths(va_list lh)
{
	const char *format = va_arg(lh, const char*);

	if (format[0] == '1')
	{
		if (format[1] == 'u')
		{
			return (print_ulong_dec(lh));
		}
		else
		{
			return (print_lon_dec(lh));
		}
	}
}
