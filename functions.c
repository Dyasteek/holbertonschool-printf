#include "main.h"
/**Include all functions to use from _printf*/

/**
 * print_percent - Function that print a percent taking a variable from va_list
 * @mf: va_list that contains the argument
 * Return: percent printed
 */
int print_percent(va_list mf)
{
	write(1, "%", 1);
	return (1);
	mf++;
}


/**
 * print_char - Function that print a char
 * @mf: va_list that contains the argument
 * Return: char prited
 */

int print_char(va_list mf)
{
	char ch;

	ch = va_arg(mf, int);
	write(1, &ch, 1);
	return (1);
}

/**
 * print_string - Function that print a string
 * @mf: va_list that contains the argument
 * Return: string printed
 */

int print_string(va_list mf)
{
	int m = 0;
	char *st = va_arg(mf, char*);

	/**check if string is NULL, in this case print "(null)"*/
	if (st == NULL)
	{
		write(1, "(", 1);
		write(1, "n", 1);
		write(1, "u", 1);
		write(1, "l", 1);
		write(1, "l", 1);
		write(1, ")", 1);
		return (6);
	}
	else
	{
		for (m = 0; st[m]; m++)
		{
			write(1, &st[m], 1);
		}
	}
	return (m);
}
/**
 * print_integer - Prints the integer given in the place of
 * the %d or %i modifier
 * @mf: va_list that contains the argument
 * Return: String printed
 */
int print_integer(va_list mf)
{
	int num = va_arg(mf, int);
	int m = 0, cont = 0;
	char buff[1000];

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	do {
		buff[m++] = '0' + num % 10;
		num /= 10;
	} while (num != 0);
	cont += m;
	while (m > 0)
	{
		write(1, &buff[--m], 1);
	}
	return (cont);
}
