#include "main.h"

/**
* _printf - Prints a string according to the introduced format.
* @format : characters that will be printed acording to format.
* Return: printed characters counter (exept the integrated-final /0 character).
*/

/* Step one: Define the Variadic Function _printf.*/
int _printf(const char *format, ...)
{

/* Step two: declare a local variable of*/
/*type va_list so we can use the variadic arguments.*/

va_list vargs; /*(variadic arguments).*/

int i = 0, number_Of_Characters_Printed = 0; /*Declare the variables to use.*/

/*let the vargs begin.*/
va_start(vargs, format);

/* Step three: Check format and select corresponding function.*/
if (!format)
{
	return (-1); /*if format is empty, return error (-1).*/
}
else
/*We observe every character until we reach the final-character \0.*/
while (format[i] != '\0')
{
	/*in case of special-format indicator */
	if (format[i] == '%')
	{
		/*in case of user-syntax error*/
		/*(special-format indicator (%) followed by nothing), return error.*/
		if (format[i + 1] == '\0')
		{
			return (-1);
		}
		else
		number_Of_Characters_Printed += elegir_funcion(vargs, format[i + 1]);
		i++; /*go next character.*/
	}
	else
	number_Of_Characters_Printed += _putchar(format[i]);
	i++; /*go next character.*/
}
va_end(vargs);/*let the vargs end*/
return (number_Of_Characters_Printed);
}
