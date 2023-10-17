#include<stdarg.h>
#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _printf - customize printf function
 * @format: string with format to print
 *
 * Return:0
 */
int _printf(const char *format, ...)
{
	va_list betty;
	int count = 0;
	if(format == NULL)
	{
		return(-1);
	}
	va_start(betty,format);
	count = _format(format,betty);
	va_end(betty);
	return(count);
}
