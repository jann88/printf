#include "main.h"
/**
 * printf_int -prints integers
 * @args: arguments to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	/*takes variable no of arguments of type va_list*/
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;


}
