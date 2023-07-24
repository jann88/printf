#include "main.h"
/**
 * check_function - a function that check for format to print
 * @format:formt to print
 * Return: zero on success
 */
int (*check_function(const char *format))(va_list)
{
	unsigned int i = 0;
	print_f check_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_dec},
		{"d", print_dec},
		{"b", print_bin},
		{"u", print_unsign},
		{"o", print_octal},
		{"x", print_hex_lower},
		{"X", print_hex_upper},
		{"S", print_custom_string},
		{"p", print_pointer},
		{NULL, NULL}
	};

	while (check_f[i].sp)
	{
		if (check_f[i].sp[0] == (*format))
			return (check_f[i].fptr);
		i++;
	}
	return (NULL);
}
/**
 * _printf - function that work like std printf
 * @format: all format to print
 * Return: zero on success
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*fptr)(va_list);

	unsigned int i = 0, cprint = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				cprint++;
				i += 2;
				continue;
			}
			fptr = check_function(&format[i + 1]);
			if (fptr != NULL)
			{
				cprint += fptr(args);
				i += 2;
				continue;
			}
		}

		_putchar(format[i]);
		cprint++;
		i++;
	}
	va_end(args);
	return (cprint);
}
