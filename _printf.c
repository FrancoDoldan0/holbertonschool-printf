#include <main.h>
#include <stdarg.h>

/**
* _printf - Prints a string according to the introduced format.
* @format : characters that will be printed acording to format.
* Return: printed characters counter (exept the integrated-final /0 character).
*/

/* Step one: Define the Variadic Function _printf.*/
int _printf(const char *format, ...)
{
/* Step two: declare a local variable of type va_list so we can use the variadic arguments.*/
va_list vargs; /*(variadic arguments).*/
int i = 0, number_Of_Characters_Printed = 0; /*Declare the variables to use.*/
va_start(vargs, format); /*let the vargs begin.*/
/* Step three: Check format and select corresponding function.*/
if(!format)
{
    return (-1); /*if format is empty, return error (-1).*/
} else
while(format[i] != '\0') /*We observe every character until we reach the final-character \0.*/
{
    if(format[i]=='%') /*in case of special-format indicator */
    {
        if(format[i+1]=='\0') /*in case of user-syntax error (special-format indicator (%) followed by nothing), return error.*/
        {
            return(-1);
        }else /*in case of correct-format indicator*/
        number_Of_Characters_Printed += elejir_funcion(vargs,format[i+1]); /*Add value to counter, and Call upon the corresponding function.*/
        i++; /*go next character.*/
    }
    else /*no special-format indicator.*/
    number_Of_Characters_Printed += _putchar(format[i]); /*Add value to the counter, and Print the current character */
    i++; /*go next character.*/
}
va_end(vargs);/*let the vargs end*/
return(number_Of_Characters_Printed); /*return the total number of printed characters (as long as the program has not ended sooner due to error)*/
}
