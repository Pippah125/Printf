#include"main.h"

int _printf(const char *format, ...)
{
	int x;
	int y = 0;
	int v;
	va_list print;
	va_start(print, format);
	if(format == NULL)
	{
		return(-1);
	}
	for (x = 0; format[x] != '\0'; x++)
	{
		if(format[x] != '%')
		{
		_putchar(format[x]);
		}
		else if(format[x +1] == 'c')
		{
			_putchar(va_arg(print, int));
			x++;									  }
		else if(format[x +1] == 's')
		{
			char * betty = (va_arg(print, char *));
		if(betty == NULL)
		{
			betty = "(null)";
		}
		
		v = _puts(betty );
		x++;
		y += (v - 1);
		}
	else if(format[x + 1] == '%')																		{
		_putchar('%');
		x++;									      }	
		else if ((format[x +1] == 'd') || (format[x + 1] =='i'))
		{
		integer(va_arg(print, int));
		x++;
		}
	else
	{
		_putchar(format[x]);
																						}

	y++;
																						}
	va_end(print);
	return (y);
}
