#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

#define BUFFER_SIZE 1024
#define MINUS 1
#define PLUS 2
#define ZERO 4
#define HASH 8
#define SPACE 16

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int print_char(va_list a);
int print_percent(__attribute__((unused))va_list args);
int print_string(va_list s);
int print_dec(va_list d);
int print_bin(va_list b);
int print_unsign(va_list u);
int print_octal(va_list d);
int print_hex_lower(va_list x);
int print_hex_upper(va_list X);
int print_custom_string(va_list S);
int print_pointer(va_list p);
int print_rev_string(va_list r);
char rot13(char c);
int print_rot13(va_list R);
int print_zero_dec(va_list z);
int _pow(int base, int exp);
int print_long_dec(va_list d);
int print_ulong_dec(va_list u);
int print_short_dec(va_list d);
int print_ushort_dec(va_list u);
int print_lengths(va_list lh);
int print_flag(va_list args);
/**
 * struct print_format -struct for the printf
 * @sp: specifiers
 * @fptr: functon pointer
 */
typedef struct print_format
{
	char *sp;
	int (*fptr)(va_list);
} print_f;

#endif
