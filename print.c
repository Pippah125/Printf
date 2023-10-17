#include"main.h"
#include<stdlib.h>
#include<stdio.h>
#include <stdarg.h>
/**
 * print_char - prints a character
 * @betty: varadic argument
 *
 * Return:0
 */
int print_char(va_list betty)
{
	_putchar(va_arg(betty, int));
	return (1);
}

/**
 * print_string - prints a string
 * @betty:variadic arguments
 *
 * Return:0
 */
int print_string(va_list betty)
{
	char *string = va_arg(betty,char *);
	int count = 0;
	if(string != NULL)
	{
		while(string[count])
		{
			_putchar(string[count]);
			count++
		}
		return (count);
	}
}

/**
 * print_int - prints an integer
 * @betty:variadic argument
 *
 * Return:0
 */
int print_int (va_list betty)
{
	int count = 1, A = 0;
	unsigned int B = 0;
	B = va_arg(betty, int);
	A = B;
	if(A < 0)
	{
		_putchar('-');
		A = A * -1;
		B = A;
		count = count + 1;
	}
	while(B > 9)
	{
		B = B/10;
		count++;
	}
	reuseint(A);
	return(count);
}

/**
 * reuseint- reursion to print an integer
 * @B:integer to use
 *
 * Return:0
 */
void reuseint(int B)
{
	unsigned int A;
	A = B;
	if(A /10 != 0)
	{
		reuseint(A /10);
	}
	_putchar(A % 10 + '0');
}

