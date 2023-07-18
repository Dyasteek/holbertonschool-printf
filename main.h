#ifndef _PRINTF
#define _PRINTF
#define BUFSIZE 1024

/**libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>
#include <stdarg.h>

/**STRUCTURE*/
/**
 * struct func - Structure of the format given to printf
 * @mod: The format specifier given
 * @f: The function that will be called
 */
typedef struct func
{
	char mod;
	int (*f)(va_list mf);
} func_c;

/**Prototypes*/
int _printf(const char *format, ...);
int print_percent(va_list mf);
int print_char(va_list mf);
int print_string(va_list mf);
int print_integer(va_list mf);

#endif
