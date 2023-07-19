#include "main.h"

/**
 * print_c - Prints a character
 * @vargs : the list of arguments
 *
 * Return: length of the string
 */

int print_c(va_list vargs)
{
	char c = va_arg(vargs, int);

	return (_putchar(c)); /* prints only a char */
}

/**
 * print_s - Prints a string
 * @vargs : list of arguments
 *
 * Return: characters count
 */

int print_s(va_list vargs)
{
	int i = 0;
	char *str = va_arg(vargs, char *);

	if (!str)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 * print_prc - Prints percentage sign
 * @vargs : list of vargs
 *
 * Return: length of the string
 */

int print_prc(__attribute__((unused)) va_list vargs)
{
	return (_putchar('%'));
}

/**
 * print_di - Prints a number in decimal form
 * @vargs : list of arguments
 *
 * Return: length of the number
 */

int print_di(va_list vargs)
{
	long int num = va_arg(vargs, int);
	long int n = num;
	long int counter;
	long int p_num;
	long int exponente = 1;

	/* case: negative integer */
	counter = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		num = -num;
		counter++;
	}

	/* calculate the length of the integer (digits) */
	if (n == 0)
	{
		_putchar('0');
		counter = 1;
		return (counter);
	}

	while (n > 0)
	{
		n /= 10;
		exponente *= 10;
		counter++;
	}
	exponente /= 10;

	/* print the number */
	for (; exponente >= 1; exponente /= 10)
	{
		p_num = ((num / exponente) % 10);
		_putchar(p_num + '0');
	}

	return (counter);
}
