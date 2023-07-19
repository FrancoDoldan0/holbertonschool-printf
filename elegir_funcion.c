#include "main.h"

/**
 * elegir_funcion - Selects the correct function to execute
 * @vargs : list of arguments
 * @letter : letter, correspond to format[i + 1]
 *
 * Return: length of string/int printed
 */
int elegir_funcion(va_list vargs, char letter)
{
	/* complete list of functions that can be executed. Format: [i + 1] */
	toprint_t data[] = {
		{"c", print_c},     /*Function to print a character*/
		{"s", print_s},     /*Function to print a string*/
		{"%", print_prc},   /*Function to print a percent symbol*/
		{"d", print_di},    /*Function to print a decimal integer*/
		{"i", print_di},    /*Function to print a decimal integer*/
		{NULL, NULL}
	};
	int j = 0;

	/*Iterate through the 'data' array to find a matching letter*/
	while (data[j].letter && letter)
	{
		if (data[j].letter[0] == letter)
			return ((data[j].f)(vargs));  /*Call the corresponding function and*/
												/*return its result*/
		j++;
	}
	if (letter != '\0')
	{
		_putchar('%');    /*Print a percent symbol*/
		_putchar(letter);   /*Print the unrecognized format specifier*/
		return (2);       /* Return the number of characters*/
							/*printed (2 in this case)*/
	}
	else
	{
		return (_putchar('%'));  /*If the letter is NULL, simply print a percent*/
									/*symbol and return the number of characters printed*/
	}
}
