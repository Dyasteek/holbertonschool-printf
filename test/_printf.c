#include "main.h"
/**
 * _printf - Prints the string given to it based on the specified format
 * @format: Said format
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list val;
	int i = 0, m = 0, cont = 0;
	func_c func[] = {
		{'%', print_percent},
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};

	va_start(val, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
			{
				m = 0;
				while (func[m].mod)
				{
					if (func[m].mod == format[i])
					{
						cont += func[m].f(val);
						break;
					}
					m++;
				}
				i++;
			}
			else
			{
				va_end(val);
				return (-1);
			}
		}
		else
		{
			write(1, &format[i], 1);
			cont++;
			i++;
		}
	}
	va_end(val);
	return (cont);
}
