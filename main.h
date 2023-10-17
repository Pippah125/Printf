#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>
typedef struct specified
{
	char *specifier;
	int(*B)(va_list betty);
}specified;
int invalid_specifier(char former, char present, int count);
int check_char(char betty);
int valid_specifier(char format, va_list betty);
int _format(const char *form, va_list betty);
int _printf(const char *format, ...);
int _putchar(char c);
int print_int (va_list betty);
void reuseint(int B);
int print_string(va_list betty);
int print_char(va_list betty);
#endif
