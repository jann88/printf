#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>

#define BUFFER_SIZE 1024

int _putchar(char c);
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
int printf_srev(va_list args);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_rot13(va_list args);
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
