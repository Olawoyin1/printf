#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	int i;
	int count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if(format[i] != '%')
		{
			_putchar(format[i]);	
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
		}
		count+=1;
	}
	return(count);
}
