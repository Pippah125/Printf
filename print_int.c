#include"main.h"
#include<stdio.h>
int print_int(int n)
{
	int num; 
	int last;
	int digit;
	int exp;
	int i;
	last = n % 10;
	exp = 1;
	i = 1;
	n = n /10;
	num = n;
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if(num > 0)
	{
		while(num/10 != 0)
		{
			exp = exp * 10;
			num = num /10;
		}

		num = n;
		while(exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp /10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
