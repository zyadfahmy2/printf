#include "main.h"
/**
 * _printf - this is a function similar to original printf
 * @format:this is the string to be printed
 *
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;
	unsigned int noOfArguments;
	int count = 0;

	va_start(list, format);
	while (*format)
	{
		if (format[i] == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(list, char);

				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(list, char*);

				while (*s)
				{
					write(1, s, 1);
					s++;
					count++;
				}

			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_start(list, noOfArguments);
	va_end(list);
	return (count);
}
