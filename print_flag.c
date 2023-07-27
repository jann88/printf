#include "main.h"
/**
 * print_flag - a function that print flags
 * @args: flags(-, +, #, 0, ' ')
 * Return: flag to print
 */
int print_flag(va_list args)
{
	const char *format = va_arg(args, const char *);
	int *i = va_arg(args, int *);

	int j, c, flags = 0;
	const char flag_char[] = {'-', '+', '0', '#', ' ', '\0'};
	const int flag_arr[] = {MINUS, PLUS, ZERO, HASH, SPACE, 0};

	for (c = *i + 1; format[c] != '\0'; c++)
	{
		for (j = 0; flag_char[j] != '\0'; j++)
		{
			if (format[c] == flag_char[j])
			{
				flags |= flag_arr[j];
				break;
			}
		}
		if (flag_char[j] == '\0')
			break;
	}
	*i = c - 1;
	return (flags);
}
