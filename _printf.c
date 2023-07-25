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
		{"r", print_rev_string},
		{"R", print_rot13},
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
	while (format[i] != '\0')/*iterates through the main string to print each char*/
	{
		while (format[i] != '%' && format[i]) /* checks format specifiers*/
		{
			_putchar(format[i]);
			cprint++;
			i++;
			
		}
		if (format[i] == '\0')
			return (cprint);
		fptr = check_function(&format[i + 1]);
		if (fptr != NULL)
		{
			cprint += fptr(args);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);

		_putchar(format[i]);
		cprint++;

		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (cprint);
}
