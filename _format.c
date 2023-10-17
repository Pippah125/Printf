#include"main.h"
#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
/**
 * check_char - check the type of specifier
 * @betty: The type to check
 *
 * Return:1
 */
int check_char(char betty)
{
	char betty[] = {'c','s','d','i','b','%'}
	int count;
	for(count = 0; betty[count] != '\0'; count++)
	{
		if (betty[count] == betty)
		{
			return(1);
		}
		return(0);
	}
}
/**
 * invalid_specifier - print out invalid specifier
 * @former:former specifier of actual specifier
 * @present: present specifier to print
 * @count:count of character
 *
 * Return:0
 */
int invalid_specifier(char former, char present, int count)
{
	count = count + _putchar('%');
	if(former == ' ')
	{
		count = count + _putchar(' ');
		count = count + _putchar(present);
	}
	else
	{
		count = count + _putchar(present);
	}
	return (count);
}
/**
 * valid_specifier - prints a vaild specifier
 * @format: specifier to print
 * @betty:variadic arguments
 *
 * Return:0
 */
int valid_specifier(char format, va_list betty)
{
	int A = 0, count = 0;
	specified betty = {
		{"s", print_string}
		{"b", print_binary}
		{"c", print_char}
		{"d", print_int}
		{"i", print_int}
		{NULL, NULL}
	};
	while(betty[A] .specifier)
	{
		if(*betty[A].specifier == format)
			count = betty[A] .B(betty);
		A++;
	}
	return(count);
}

/**
 * _format - print specified format
 * @form:format to print
 * @betty:variadic arguments
 *
 * Return:0
 */
int _format(const char *form, va_list betty)
{
	int count = 0, A = 0;
	for(int A = 0; form[A]; A++)
	{
		if(form[A] == '%')
		{ 
			if(form[A + 1] == '\0')
			{
				return(-1);
			}
			A++;
			while(form[A] == ' ')
			{
				A++;
				if(form[A] == '%')
				{
					count = count + _putchar(form[A]);
				}
				if(check_char(form[A]) == 0)
				{
					count = invalid_specifier(form[A - 1], form[A], count);
				}
				else
				{
					count = count + valid_specifier(form[A], betty);
				}
			}
			else
			{
				count = count + _putchar(form[A]);
			}
			A++;
		}
		return (count);
	}
}
	
