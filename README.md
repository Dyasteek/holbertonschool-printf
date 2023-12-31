<h1>Printf proyect</h1>

<h2>Making a custom printf executable with some <br>
 features</h2>

<h3>The repository contain:</h3>
<p>

	This Readme (README.md)

	Header file (main.h)

	Functions (functions.c)

	C file (_printf.c)

	The man of the program (man_3_printf)
</p>
<h4>	
	The _printf function returns the number of characters that were printed.
	Here is an example of how to use the _printf function with a flowchart below:
	
		#include <stdio.h>
		#include "_printf.h"
	
		int main()
		{
			_printf("Hello, world!\n");
			_printf("The number 123 is %d.\n", 123);
			_printf("The string \"Hello, world!\" is %s.\n", "Hello, world!");
		return 0;
		}
		
		This code will print the following output:
		
		Hello, world!
		The number 123 is 123.
		The string "Hello, world!" is Hello, world!
</h4>
<img src="https://github.com/Dyasteek/holbertonschool-printf/blob/master/flowchart_printf.svg" alt="Flowchart printf">

<h5>
	Examples of flags in the printf:
</h5>

	c - Used to print a character. you need to provide a char value as an argument after %c, and printf will display that character in the output.

	s - Used to print a string of characters. You should pass a pointer to a character array as abn argument after %s, and printf will print the contents  of that  string in the output.

	% - If you want  to print  a percentage sign "%" in the output instead of interprety it as a format specifier, simply use "%%", For example, printf("The value is %%\n"); will print "The value is %" in the output.

	d, i - Both are used to print signed integer numbers. You can provide an int value as a argument %d or %i, and  printf will display that number in the output.

<footer>Maded by
    <a
    style="text-decoration: none;"
    href="github.com/jorge871">
    Jorge Gomez</a>
    &
    <a
    style="text-decoration: none;"
    href="github.com/dyasteek">
    Andres del Rio</a>
</footer>
