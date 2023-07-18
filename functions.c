#include "main.h"
/**Include all functions to use from _printf*/

/**
 * print_percent - Function that print a percent taking a variable from va_list
 * without using it in the function body due to the unused attribute
 * @mf: va_list that contains the argument of _printf function
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
 * @mf: va_list that contains the argument of _printf function
 * Return: char prited
 */

int print_char(va_list mf)
{
	char ch;

	ch = va_arg(mf, int);
	/**print a char that has been retrieved by*/
	/**va_arg function from va_list argument*/
	write(1, &ch, 1);

	/*Return 1 because is the value of a char*/
	return (1);
}

/**
 * print_string - Function that print a string
 * @mf: va_list that contains the argument of _printf function
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
		/**through the string character by character*/
		for (m = 0; st[m]; m++)
		{
			/**print each char, counter variable m is incremented*/
			write(1, &st[m], 1);
		}
	}
	/**return the number of characters printed*/
	return (m);
}
/**
 * print_integer - Prints the integer given in the place of
 * the %d or %i modifier
 * @mf: va_list that contains the argument of _printf function
 *
 * Return: String printed
 */
int print_integer(va_list mf)
{
	int decimal = 1;
	int count = 0;
	long int digit = va_arg(mf, int);
	long int digitaux;

	if (digit < 0)
	{
		count += _putchar('-');
		digit *= -1;
	}

	if (digit < 10)
		return (count_fun += _putchar(digit + '0'));

	digitaux = digit;

	while (digitaux > 9)
	{
		decimal *= 10;
		digitaux /= 10;
	}
	while (decimal >= 1)
	{
		count_fun += _putchar(((digit / decimal) % 10) + '0');
		decimal /= 10;
	}

	return (count_fun);
}
}

