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
	Here is an example of how to use the _printf function:
	
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


<footer>Maded by Jorge Gomez & Andres del Rio</footer>
